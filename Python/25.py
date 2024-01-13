# 25 - 1000-digit Fibonacci Number

a = 1
b = 1
i = 2

while b < pow(10, 999):
    tmp = a
    a = b
    b += tmp
    i += 1
print(i)
