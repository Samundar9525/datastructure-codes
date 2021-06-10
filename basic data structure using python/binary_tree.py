class node():
    def __init__(self,data):
        self.data=data
        self.left=0      #here we create a constructor of the node class whenever
        self.right=0     # object of class is created it automatically allocate
                            # the data as well as space for the left an right child

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


def preorder(root):
    if root==0:
        return
    else:
        print(root.data,end=" ")
        preorder(root.left)
        preorder(root.right)

def postorder(root):
    if root==0:
        return
    else:
       postorder(root.left)
       postorder(root.right)
       print(root.data,end=" ")

def inorder(root):
    if root==0:
        return
    else:
      inorder(root.left)
      print(root.data,end=" ")
      inorder(root.right)

def levelorder(root):
    if root==0:
        return
    else:
        queue=[]
        queue.append(root)      #here we initialize the queue so that our next logic work
        queue.append(None)
        while(len(queue)>0):
            if queue[0]==None:
                print(" ")
                queue.append(None)
                node=queue.pop(0)
            if queue[0]!=None:
                print(queue[0].data,end=" ")
            node=queue.pop(0)
            if node.left!=0:
                queue.append(node.left)
            if node.right!=0:
                queue.append(node.right)







def height(root):
    if root==0:
        return -1
    else:
        lheight=height(root.left)
        rheight=height(root.right)

        if lheight>rheight:
            h=lheight+1
        else:
            h=rheight+1
    return h



if __name__ == '__main__':
    choice=0
    while(choice!=-1):
        print("\n--------------------------------------------------------------")
        print("1.CREATE TREE ")
        print("2.INSERT DATA IN TREE")
        print("3.PREORDER TRAVERSAL")
        print("4.POSTORDER TRAVERSAL")
        print("5.INORDER TRAVERSAL")
        print("5.LevelORDER TRAVERSAL")
        print("7.HEIGHT OF TREE")
        print("--------------------------------------------------------------")
        choice=int(input("\t\t\t\t\t\t\t Enter your choice : "))
        if choice==1:
            root= createtree()
        if choice==2:
            pass
        if choice==3:
            preorder(root)
        if choice == 4:
            postorder(root)
        if choice == 5:
            inorder(root)

        if choice == 6:
            levelorder(root)

        if choice == 7:
            res=height(root)
            print(res)