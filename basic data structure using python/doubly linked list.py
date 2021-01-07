class node:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None

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
        if(head==None):
            nod.next=head
            nod.prev=None
            head = nod
        else:
            nod.next = head
            head.prev=nod
            head=nod
        print("DATA AT BEGINNING INSERTED")
        return head
    if(ch==2):
        p=head
        while(p.next!=None):
            p=p.next
        p.next=nod
        nod.prev=p
        print("DATA AT END INSERTED")
        return head
    if(ch==3):
        p=head                                       #you cannot able to insert the data at te begining  qnd at the end by this method
        pos=int(input("ENTER THE POS : "))           #but giving some condition will do this but i am skipping here to make it simple to understand
        for i in range(1,pos-1 or p!=None):#bahut mehnat laga ye karne me
            if(p==None):
                print("out of index")
                break
            else:
                p=p.next
        if(p!=None):        #bahut mehnat laga ye karne me
            nod.next=p.next
            nod.prev=p
            p.next.prev=nod
            p.next=nod
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
            if(head!=None):
                head.prev=None  #this condition will check whether head is not None means if we want to delete the single left element
            p=None
            print("Data deleted from Begining ")
        return head
    if (ch==2):
        if(head==None):
            print("NO ELEMENT TO DELETE ")
        else:
            p=head
            while(p.next!=None):
                p=p.next
            if(p.prev!=None):           #this condition is for if we want to delete the single left element
                p.prev.next=None
            else:
                head=None
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
                p=p.next


            if(flag==0):
                print("data not found")
                return head
            if (p.next == None):
                print("the only", end="")
                p=None
                head = p             # this will delete the single last element also   ***********
                return head
            elif(p==head):              # if someone want to delete the first data then
                head=p.next
                head.prev=None
                p=None
                return head
            else:                         # kaam chal raha hai koi last element ko udana chahe toh
                q = p.prev
                r = p.next
                q.next = r
                r.prev = q
                return head

def display(head):
    if(head==None):
        print("YOUR LIST IS EMPTY")
    else:
        p = head
        print('..'*25)
        print(" YOUR LINKED LIST IS : ",end=" ")
        while (p != None):
            print(p.data,end="  ")
            q = p
            p = p.next
        print("")
        print('..' * 25)
        print(" BACKWARD TRAVERSING : ",end=" ") #this is just to show that the prev is also working
        while(q!=None):
            print(q.data,end=" ")
            q=q.prev
        print("")
        print('..' * 25)


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

