# 17 - Number Letter Counts

numberLetterCount = {
    1 : 3
    ,2 : 3
    ,3 : 5
    ,4 : 4
    ,5 : 4
    ,6 : 3
    ,7 : 5
    ,8 : 5
    ,9 : 4
    ,10 : 3
    ,11 : 6
    ,12 : 6
    ,13 : 8
    ,14 : 8
    ,15 : 7
    ,16 : 7
    ,17 : 9
    ,18 : 8
    ,19 : 8
}

tensLetterCount = {
    2 : 6
    ,3 : 6
    ,4 : 5
    ,5 : 5
    ,6 : 5
    ,7 : 7
    ,8 : 6
    ,9 : 6
}

def getLetterCount(n):
    count = 0
    if n > 99:
        count = numberLetterCount[int(n / 100)] + 7
        if n % 100 != 0:
            count += 3 + getLetterCount(n -  int(n / 100) * 100)
    else:
        if n in range(1, 20):
            count = numberLetterCount[n]
        else:
            count = tensLetterCount[int(n / 10)]
            if n % 10 != 0:
                count += numberLetterCount[n - int(n / 10) * 10]

    return count

letterCount = 0
for i in range(1, 1000):
    letterCount += getLetterCount(i)

print(letterCount + 11)
