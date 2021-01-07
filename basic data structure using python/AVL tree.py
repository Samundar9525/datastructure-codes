class node():
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
        self.height=1        #kyunki jo node hoga uska bhi height hoaga hi
def max(a,b):
    if a>b:
        return a
    else:
        return b

def height(root):
    if root==None:
        return 0
    return root.height

def balance(root):
    if root==None:
        return 0
    return (height(root.left)-height(root.right))





class tree():
    def insert(self,arr):
        root=None;
        for i in range(len(arr)):
            p = node(arr[i])
            if i==0:
                root=p;

            else:
                q=root
                while(1):
                    if (p.data>q.data):
                        if (q.right==None):
                            q.right=p
                            q.height=max(height(q.right),height(q.left))+1
                            break
                        else:
                            q=q.right
                    else:
                        if (q.left == None):
                            q.left = p
                            q.height = max(height(q.right), height(q.left)) + 1
                            break
                        else:
                            q = q.left

        return root


def inorder(root):
    if root==None:
        return
    else:
      inorder(root.left)
      print("(",root.data,"h = ",root.height,")")
      inorder(root.right)

if __name__ == '__main__':
    print("Enter the nodes  : ")
    #arr=list(map(int,input().split()))
    arr=[10,20,30,40,50,25]
    obj=tree()
    root=obj.insert(arr)
    inorder(root)

