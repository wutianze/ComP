import glob
files = glob.glob('/apollo/data/log/test/multi/*')
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
        print(res[int(len(res)/2)])#middle lantency
        print(res[int(len(res)*0.95)])
        print(res[len(res)-1])#big
        print(res[0])#small
        print(total / count)#avg
    
