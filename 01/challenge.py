with open("input", "r") as file:
    numbers1 = []
    numbers2 = []

    for line in file.readlines():
        numbers1.append(int(line[0:5]))
        numbers2.append(int(line[8:13]))

    print(sum(abs(x - y) for x, y in zip(sorted(numbers1), sorted(numbers2))))
