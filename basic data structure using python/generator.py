def fun(n):
    for i in range(1,n+1):
        i=i*i
        yield(i)


num=fun(10)
for i in num:
    print(i)
for i in num:
    print(i)

