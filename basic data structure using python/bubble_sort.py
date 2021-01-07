#here instead of takin input from user we created a list having ome data element:
a=[56,34,28,67,33,12,11,10]
print(f"The data before sorting is : {a}")
print("sorting initiated...........")

#function is defined here
def bubblesort(a):
    n=len(a)
    for i in range(n):
       for j in range(n-i-1):
           if(a[j]>a[j+1]):
               a[j],a[j+1]=a[j+1],a[j]  #swapping performed

#function is called here.
bubblesort(a)
print(f"The sorted data is : {a}")