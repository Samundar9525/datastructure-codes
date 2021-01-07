def push(item):
    a[top]=item

def pop ():
    a[top]=0

def display():
    print("your data is  : ")
    for i in range(len(a)):
        print(a[i], end="  ")
    print(" ")

def isempty():
    return top>0

def isfull():
    return top<len(a)

if __name__ == '__main__':

    a = [0] * 6
    top = int(0)
    choice = int()
    while (choice != -1):
        print("1. INSERT DATA ")
        print("2. DELETE DATA")
        print("3. DISPLAY DATA")

        choice = int(input("\t\t\t PLEASE ENTER YOUR CHOICE : "))
        if(choice==1):
            if(isfull()):
                item=int(input("enter the data element  :  "))
                push(item)
                top=top+1
            else:
                print("\t\t\t\t\t\t\t\t\t\t\t\t STACK IS FULL\n")
        if(choice==2):
            if(isempty()):
                top = top - 1
                pop()
            else:
                print(" \t\t\t\t\t\t\t\t\t\t\t\tSTACK IS EMPTY\n")

        if(choice==3):
            display()
