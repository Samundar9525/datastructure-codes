def linear(arr,data):
    for i in range(len(arr)):
        if (arr[i]==data):
            print("data found")
            break;
        else:
            print("data not found")
#insert data in the list
arr=list()
n=int(input("enter the size of the array : "))
for i in range(n):
    arr.append(int(input("enter the data element :")))
#searching the data
data=int(input("\n\t\t\t enter the data to be searched : "))
linear(arr,data)

