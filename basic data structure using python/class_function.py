class cal:
    def add(x,y):
        return x+y
    def sub(x,y):
        return x-y

a=int(input("enter a number : "))
b=int(input("enter another number : "))

print(f"sum of number {cal.add(a,b)}")          # direct access the function of class without object
print(f"subtract of number {cal.sub(a,b)}")     # direct access the function of class without object
