#function to perform binary search
def binarysearch(arr,data,beg,end,mid):
    mid = int((beg + end) / 2)

    if(arr[mid]==data):
        print("\t\t\t data found ")
        return
    elif ((beg>len(arr) or end<0)):
        print("hello")
        return
    else:
        if(arr[mid]>data):
            end=mid-1
            binarysearch(arr, data, beg, end, mid)

        elif (arr[mid] < data):
            beg = mid + 1
            binarysearch(arr, data, beg, end, mid)

#insert data in the list
arr=list()
n=int(input("enter the size of the array : "))
for i in range(n):
    arr.append(int(input("enter the data element :")))
arr.sort()
print("\n")
# these data is onlt to initiate the function at beginning
data=0
beg = 0
end = len(arr)
mid = int((beg + end) / 2)
#calling the binary search function
while(data!=-1):
    data = int(input("enter the data to be searched : "))
    binarysearch(arr,data,beg,end,mid)