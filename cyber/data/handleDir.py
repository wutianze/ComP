import glob
import csv
import sys
files = glob.glob('/apollo/data/log/test/multi/*lan')
msg_size = int(sys.argv[1])
hz = int(sys.argv[2])
con = int(sys.argv[3])
record_file_name = str(sys.argv[4])
for f in files:
    
    for_write = []
    with open(f) as lines:
        for_write.append(msg_size)
        for_write.append(hz)
        for_write.append(con)
        array = lines.readlines()
        total = 0
        count = 0
        ignore = 0
        res = []
        for i in array:
            if ignore < 30:
                ignore = ignore + 1
                continue
            res.append(int(i.strip()))
            total = total + int(i.strip())
            count = count + 1
        res.sort()
        #print(f)
        #for_write.append(f)
        middle_lantency = res[int(len(res)/2)]
        #print(middle_lantency)#middle lantency
        for_write.append(middle_lantency)
        lan_95th = res[int(len(res)*0.95)]
        #print(lan_95th)
        for_write.append(lan_95th)
        big_lan = res[len(res)-1]
        #print(big_lan)#big
        for_write.append(big_lan)
        small_lan = res[0]
        #print(small_lan)#small
        for_write.append(small_lan)
        avg = total/count
        #print(avg)#avg
        for_write.append(avg)
        with open(f+"loss") as lines2:
            loss_rate = lines2.readlines()
            #print(loss_rate[0])
            for_write.append(loss_rate[0])
with open(record_file_name, 'a', encoding='utf-8', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(for_write)
#        writer.writerows(data)
    
