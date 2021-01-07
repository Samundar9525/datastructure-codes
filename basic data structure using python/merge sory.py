
def mergesort(a,lb,ub):
    if(lb<ub):
        mid=int((ub+lb)/2)
        mergesort(a,lb,mid)
        mergesort(a,mid+1,ub)
        merge(a, lb, mid, ub)

def merge(a,lb,mid,ub):
    i=lb
    j=mid+1
    k=lb

    while(i<=mid and j<=ub):
        if(a[i]<=a[j]):
            b[k]=a[i]
            i=i+1
        else:
            b[k]=a[j]
            j=j+1
        k=k+1
    if(i>mid):
        while(j<=ub):
            b[k] = a[j]
            j=j+1
            k=k+1
    else:
        while(i<=mid):
            b[k]=a[i]
            k = k+1
            i = i+1
    for i in range (lb,k):
        a[i]=b[i]


#here instead of takin input from user we created a list having ome data element:
a=[3,8,5,2,4,1]
b = [0] * 6     #this will fix the size of the array ans set the default value 0 in it
print(f"The data before sorting is : {a}")
print("sorting initiated...........")
lb=0
ub=len(a)-1
print("\n")
#function is called here
mergesort(a,lb,ub)
print(f"The sorted data is : {a}")
