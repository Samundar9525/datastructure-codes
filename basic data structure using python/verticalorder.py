
class node():
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def createtree():
    print("\t\t\t\t\t\t\t press -1 for exit insertion :")
    data=(input("Insert data"))
    q=node(data)
    if data=="-1":
        return 0
    else:
        print("enter the left child of ",data)
        q.left=createtree()
        print("enter the right child of ", data)
        q.right = createtree()
    return q


def verticalorder(root):
    if root is not None:
        queue=[]
        queue.append(root)
        node_dict={}         #ye bas temp dict hai
        dict={}                # ye original dict hai
        node_dict[root.data]=0     #ye bas initialize karne ke liye hai

        while(len(queue)>0):
            temp=[]
            curr=queue.pop(0)
            if curr is not None:
                level=node_dict[curr.data]

                if level in dict:
                    temp=dict.get(level)
                    temp.append(curr.data)
                else:
                    temp.append(curr.data)
                    dict[level]=temp

                if curr.left !=0:
                    lnode=curr.left
                    queue.append(lnode)
                    node_dict[lnode.data]=node_dict[curr.data]-1
                if curr.right !=0:
                    rnode=curr.right
                    queue.append(rnode)
                    node_dict[rnode.data]=node_dict[curr.data]+1
    print(dict)
















def inorder(root):
    if root==0:
        return
    else:
      inorder(root.left)
      print(root.data,end=" ")
      inorder(root.right)

if __name__ == '__main__':
    choice=0
    while(choice!=-1):
        print("\n--------------------------------------------------------------")
        print("1.CREATE TREE ")
        print("2.INORDER TRAVERSAL \t\t\t\t for debugging ")
        print("3.VERTICALORDER TRAVERSAL")
        print("--------------------------------------------------------------")
        choice=int(input("\t\t\t\t\t\t\t Enter your choice : "))
        if choice==1:
            root= createtree()
        if choice == 2:
            inorder(root)
        if choice == 3:
            verticalorder(root)

