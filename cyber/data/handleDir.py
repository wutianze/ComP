import glob
#import csv
#for_write = [[],[],[],[],[],[],[]]
files = glob.glob('/apollo/data/log/test/multi/*lan')
for f in files:
    with open(f) as lines:
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
        print(f)
        #for_write[0].append(f)
        middle_lantency = res[int(len(res)/2)]
        print(middle_lantency)#middle lantency
        #for_write[1].append(middle_lantency)
        lan_95th = res[int(len(res)*0.95)]
        print(lan_95th)
        #for_write[2].append(lan_95th)
        big_lan = res[len(res)-1]
        print(big_lan)#big
        #for_write[3].append(big_lan)
        small_lan = res[0]
        print(small_lan)#small
        #for_write[4].append(small_lan)
        avg = total/count
        print(avg)#avg
        #for_write[5].append(avg)
        with open(f+"loss") as lines2:
            loss_rate = lines2.readlines()
            print(loss_rate[0])
            #for_write[6].append(loss_rate[0])
#with open('result.csv', 'w', encoding='utf-8', newline='') as f:
#        writer = csv.writer(f)
        #writer.writerow(header)
#        writer.writerows(data)
    
