#here instead of takin input from user we created a list having ome data element:
a=[56,34,28,67,33,12,11,10]
print(f"The data before sorting is : {a}")
print("sorting initiated...........")

#function is defined here
def insertionsort(a):
    n=len(a)
    for i in range(1,n):
        j = i-1
        temp=a[i]
        while(temp<a[j] and j>=0):
            a[j+1]=a[j]
            j=j-1
        a[j+1]=temp

print("\n")
#function is called here.
insertionsort(a)
print(f"The sorted data is : {a}")

