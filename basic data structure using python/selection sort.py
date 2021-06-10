#here instead of takin input from user we created a list having ome data element:
a=[3,8,5,2,4,1]
print(f"The data before sorting is : {a}")
print("sorting initiated...........")

#function is defined here
def selectionsort(a):
    n=len(a)
    for i in range(n):
        min=i
        for j in range(i+1, n):
            if(a[min]>a[j]):
                min=j

        a[i],a[min]=a[min],a[i]     #swapping done here


print("\n")
#function is called here.
selectionsort(a)
print(f"The sorted data is : {a}")
