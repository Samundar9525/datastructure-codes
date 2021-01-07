
def linelevelorder(root):
    if root==0:
        return
    else:
        queue=[]
        queue.append(root)
        while(len(queue)>0):
            print(queue[0].data,end=" ")
            node=queue.pop(0)
            if node.left!=0:
                queue.append(node.left)
            if node.right!=0:
                queue.append(node.right)



def levelorder(root):
    if root==0:
        return 0
    else:
        queue=[]
        queue.append(root)
        queue.append(None)
        while(len(queue)>0):
            if (queue[0]==None):
                print("")
                queue.append(None)
                node = queue.pop(0)
            if (queue[0]!=None):
                print(queue[0].data,end=" ")
            node=queue.pop(0)
            if (node!= None):
                if node.left!=0:
                    queue.append(node.left)
                if node.right !=0:
                    queue.append(node.right)

class node():
    def __init__(self, data):
        self.data = data
        self.left = 0
        self.right = 0



def createtree():
    print("\t\t\t\t\t\t\t press -1 for exit insertion :")
    data=int(input("Insert data"))
    q=node(data)
    if data==-1:
        return 0
    else:
        print("enter the left child of ",data)
        q.left=createtree()
        print("enter the right child of ", data)
        q.right = createtree()
    return q

if __name__ == '__main__':
    choice=0
    while(choice!=-1):
        print("\n--------------------------------------------------------------")
        print("1.CREATE TREE ")
        print("2.LEVELOEDER TRAVERSAL")
        print("--------------------------------------------------------------")
        choice=int(input("\t\t\t\t\t\t\t Enter your choice : "))
        if choice==1:
            root= createtree()
        if choice == 2:
            print("THE DATA IN ONE LINE ")
            linelevelorder(root)
            print("\n\n")
            print("THE DATA LEVEL WISE ")
            levelorder(root)