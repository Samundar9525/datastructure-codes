def enqueue(item):
    a[rear]=item
    display()

def  dequeue():
   a[front]="NULL"
   display()

def display():
    print("your data is  : ")
    for i in range(len(a)):
        print(a[i], end="  ")
    print(" ")

def isempty():
    return (front!=-1 and rear!=-1)

def isfull():
    return (front!=(rear+1)%len(a))

if __name__ == '__main__':

    a = [0] * 6
    rear = -1
    front=-1
    choice = int()
    while (choice != -1):
        print("1. INSERT DATA ")
        print("2. DELETE DATA")
        print("3. DISPLAY DATA")
        print(f"\t\t\t\t\t\t front:{front}  \t\t\t\t\t  rear :{rear}  ")

        choice = int(input("\t\t\t PLEASE ENTER YOUR CHOICE : "))
        if(choice==1):
            if(isfull()):
                item = int(input("enter the data element  :  "))
                if (front == -1 and rear == -1):
                    front = rear = 0
                    a[rear]=item
                else:
                    rear = (rear + 1)%len(a)
                    enqueue(item)

            else:
                print("\t\t\t\t Queue  IS FULL\n")

        if(choice==2):
            if(isempty()):
                dequeue()
                front = (front + 1) % len(a)
            else:
                print(" \t\t\t\t\tQueue IS EMPTY\n")

        if(choice==3):
            display()
