def enqueue(item):
    a[rear]=item
    display()

def  dequeue():
   a[front]=0
   display()

def display():
    print("your data is  : ")
    for i in range(len(a)):
        print(a[i], end="  ")
    print(" ")

def isempty():
    return (front==0 or front<rear)

def isfull():
    return (rear<len(a)-1)

if __name__ == '__main__':

    a = [0] * 6
    rear = -1
    front=-1
    choice = int()
    while (choice != -1):
        print("1. INSERT DATA ")
        print("2. DELETE DATA")
        print("3. DISPLAY DATA")

        choice = int(input("\t\t\t PLEASE ENTER YOUR CHOICE : "))
        if(choice==1):
            if(isfull()):
                item=int(input("enter the data element  :  "))
                rear = rear + 1
                enqueue(item)

            else:
                print("\t\t\t\t Queue  IS FULL\n")

        if(choice==2):
            if(isempty()):
                front = front + 1
                dequeue()
            else:
                print(" \t\t\t\t\tQueue IS EMPTY\n")

        if(choice==3):
            display()
