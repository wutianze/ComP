with open("/ros_test/log/tmp") as lines:
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

    print(res[int(len(res)/2)])
    print(total / count)
