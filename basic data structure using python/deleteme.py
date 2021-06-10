class node():
    def __init__(self,data):
        self.data=data
        self.next=None


if __name__ == '__main__':
    head=None
    i=0
    while(i!=3):
        data=int(input("Enter data : "))
        nod=node(data)
        nod.next=head
        head=nod
        i =i+1
    # first=node(10)
    # second=node(20)
    # third=node(30)
    # head=first
    # first.next=second
    # second.next=third
    while(head!=None):
        print(head.data)
        head=head.next

