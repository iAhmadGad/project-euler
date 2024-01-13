# 19 - Counting Sundays

def isLeap(year):
    if year % 4 != 0 or (year % 100 == 0 and year % 400 != 0):
        return False
    return True

def getMonthDays(year, month):
    if month == 2:
        if isLeap(year):
            return 29
        else:
            return 28
    elif month in (4, 6, 9, 11):
        return 30
    else:
        return 31

year = 1901
month = 1
monthDay = 1
monthDays = 31
weekDay = 1
sundaysCount = 0

while year <= 2000:
    if weekDay == 1 and monthDay == 1:
        sundaysCount += 1
    if weekDay == 7:
        weekDay = 0
    if monthDay == monthDays:
        month += 1
        monthDay = 0
        monthDays = getMonthDays(year, month % 12)
        if month % 12 == 0:
            year += 1
        
    weekDay += 1
    monthDay += 1
    
print(sundaysCount)
