class node:
    def __init__(self,data):
        self.data=data
        self.next=None

def insert(head):
    print("**" * 80)
    print("\t\t\t\t1 . Insert data in the beginning", end="")
    print("\t\t\t\t2 . Insert data in  the end", end="")
    print("\t\t\t\t3 . Insert data at  any position")
    print("**" * 80)
    ch = int(input("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter your Choice : "))
    data = int(input("Enter the data : "))
    nod = node(data)
    if(ch==1):
        nod.next = head
        head=nod
        print("DATA AT BEGINNING INSERTED")
        return head
    if(ch==2):
        p=head
        while(p.next!=None):
            p=p.next
        p.next=nod
        print("DATA AT END INSERTED")
        return head
    if(ch==3):
        p=head
        pos=int(input("ENTER THE POS : "))
        #you cannot able to insert the data at te begining by this method
        for i in range(1,pos-1 or p!=None):#bahut mehnat laga ye karne me
            if(p==None):
                print("out of index")
                break
            else:
                p=p.next
        if(p!=None):        #bahut mehnat laga ye karne me
            nod.next=p.next
            p.next=nod
            print(f"your data at {pos} position inserted sucessfully")
        return head


def delete(head):
    print("**"*80)
    print("\t\t\t\t1 . delete data from the beginning",end="")
    print("\t\t\t\t2 . delete data from the end",end="")
    print("\t\t\t\t3 . delete data from the any position")
    print("**" * 80)
    ch = int(input("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Enter your Choice : "))
    if(ch==1):
        if(head==None):
            print("NO ELEMENT TO DELETE ")
        else:
            p=head
            head=p.next
            p=None
            print("Data deleted from Begining ")
            return head
    if (ch==2):
        if(head==None):
            print("NO ELEMENT TO DELETE ")
        else:
            p=head
            q=head
            if(p.next==None):
                print("the only",end="")
                head= None  # this will delete the single last element also   ***********
            else:
                while(p.next!=None):
                    p=p.next
                while(q.next!=p):
                    q=q.next
                q.next=None   # or you can write here  None
                p=None
            print("Data deleted from end")
            return head

    if(ch==3):
        if (head == None):
            print("NO ELEMENT TO DELETE ")
        else:
            flag=1
            p=head
            item=int(input("Enter the data item to be deleted : "))
            while(p!=None):
                if(p.data==item):
                    flag=1
                    break
                else:
                    flag=0
                q = p
                p = p.next

            if(flag==0):
                print("data not found")
                return head
            if (p.next == None):
                print("the only", end="")
                head = None              # this will delete the single last element also   ***********
                return head
            elif(p==head):              # if someone want to delete the first data then
                head=p.next
                p=None
                return head
            else:
                q.next = p.next
                p=None                          # kaam chal raha hai koi last element ko udana chahe toh
            return head



def display(head):
    if(head==None):
        print("YOUR LIST IS EMPTY")
    else:
        p = head
        print("YOUR LINKED LIST IS : ",end=" ")
        while (p != None):
            print(p.data,end="  ")
            p = p.next
        print("\n")


if __name__ == '__main__':
    choice=int()
    head = None
    while(choice!=-1):
        print("1. INSERT DATA ")
        print("2. DELETE DATA")
        print("3. DISPLAY DATA")
        choice=int(input("\t\t\t\t ENTER YOUR CHOICE : "))

        if(choice==1):
            h=insert(head)
            head=h
            display(head)
        if (choice==2):
            h=delete(head)
            head=h
            display(head)
        if(choice==3):
            display(head)

