import sys


def auxsum(summa, addendumCount):
    if addendumCount == 1:
        return [[summa]]
    expression = []
    for i in range(1, summa / addendumCount + 1):
        for j in auxsum(summa - i, addendumCount - 1):
            if j[0] >= i:
                expression.append([i] + j)
    return expression


def allsum(summa):
    z = 1
    for n in range(2, summa+1):
        for x in auxsum(summa, n):
            if z == 13672:
                print("+".join(str(i) for i in x))
            z += 1

allsum(int(sys.argv[1]))
