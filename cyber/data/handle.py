with open("/apollo/data/log/test/intra.txt") as lines:
    array = lines.readlines()
    total = 0
    count = 0
    ignore = 0
    for i in array:
        if ignore < 10:
            ignore = ignore + 1
            continue
        total = total + int(i.strip())
        count = count + 1
    print(total / count)
