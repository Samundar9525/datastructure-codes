#here instead of takin input from user we created a list having ome data element:
a=[3,8,5,2,4,1]
print(f"The data before sorting is : {a}")
print("sorting initiated...........")
lb=0
ub=len(a)-1

#function for partition
def partition(arr,lb,ub):
    start=lb
    end=ub
    pivot=a[lb]
    while(start<end):
        while(a[start]<=pivot):
            start=start+1
        while(a[end]>pivot):
            end=end-1
        if(start<end):
            a[start],a[end]=a[end],a[start]

    a[lb],a[end]=a[end],a[lb]
    return end

#function is defined here
def quicksort(a,lb,ub):
    if(lb<ub):
        d=partition(a,lb,ub)
        quicksort(a,lb,d-1)
        quicksort(a,d+1,ub)

print("\n")
#function is called here.
quicksort(a,lb,ub)
print(f"The sorted data is : {a}")
