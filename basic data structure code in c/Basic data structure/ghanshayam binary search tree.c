#include<stdio.h>
#include<stdlib.h>
#define ALLOCATE (node *)malloc(sizeof(node))

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
typedef struct node node;

node *tree = NULL;

node *createTree(node *);
node *insert(node *, int);
int search(node *,int);
void inorder(node *);
void preorder(node *);
void postorder(node *);
node *smallest(node *);
node *largest(node *);
void deleteElement(node *,int);

int main()
{
    int choice,num;
    node *ptr;
    tree = createTree(tree);
    while(1)
    {
        printf("\n\nOptions: ");
        printf("\n1. Insert new Element"\
               "\n2. Search Element"\
               "\n3. PreOrder Traversal"\
               "\n4. InOrder Traversal"\
               "\n5. PostOrder Traversal"\
               "\n6. Find smallest Element"\
               "\n7. Find largest Element"\
               "\n8. Delete node"\
               "\n0. Exit");
        printf("\nSelect Your choice: ");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d",&num);
            tree = insert(tree,num);
            break;
//        case 2:
//            printf("Enter element to search");
//            scanf("%d",&num);
//            if (search(tree,num))
//                printf("%d is found!!!",num);
//            else
//                printf("%d is not found!!",num);
//                break;
        case 3:
            printf("PreOrder search result: \n");
            preorder(tree);
            break;
        case 4:
            printf("InOrder search result: \n");
            inorder(tree);
            break;
        case 5:
            printf("PostOrder search result: \n");
            postorder(tree);
            break;
        case 6:
            ptr = smallest(tree);
            if(ptr == NULL)
                printf("Tree is Empty");
            else
            printf("Smallest Number is %d",ptr->data);
            break;
        case 7:
            ptr = largest(tree);
            if(ptr == NULL)
                printf("Tree is Empty");
            else
            printf("Largest Number is %d",ptr->data);
            break;
        case 8:
            printf("Enter element to delete: ");
            scanf("%d",&num);
            deleteElement(tree,num);
            break;
        case 0:
            exit(1);
        default:
            printf("Please enter valid input");


        }
    }
}


node *createTree(node *tree)
{
    tree = NULL;
    return tree;
}

node *insert(node *tree, int val)
{
    node *new_node, *ptr, *pptr;
    new_node = ALLOCATE;
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;

    if(tree == NULL)
        tree = new_node;
    else
    {
        ptr = tree;
        while(ptr != NULL)
        {
            pptr = ptr;
            if(val < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr ->right;
        }
        if (val < pptr->data)
            pptr->left = new_node;
        else
            pptr->right = new_node;
    }
    return tree;
}

void preorder(node *tree)
{
    if (tree != NULL)
    {
        printf("%d\t",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}

void inorder(node *tree)
{
    if (tree != NULL)
    {
        inorder(tree->left);
        printf("%d\t",tree->data);
        inorder(tree->right);
    }
}


void postorder(node *tree)
{
    if (tree != NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d\t",tree->data);

    }
}

node *smallest(node *tree)
{
if (tree == NULL || tree->left == NULL)
    return tree;
else
    smallest(tree->left);
}


node *largest(node *tree)
{
if (tree == NULL || tree->right == NULL)
    return tree;
else
    largest(tree->right);
}

void deleteElement(node *tree, int num)
{
    node *ptr,*pptr,*parent,*suc;
    if (tree == NULL)
    {
        printf("Tree is Empty");
        return;
    }
    ptr = tree;
    while(ptr != NULL && ptr->data != num)
    {
        pptr = ptr;
        if(num < ptr->data)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    if (ptr == NULL)
    {
        printf("Value not found!!");
    }
    else if (ptr->left == NULL && ptr->right == NULL)
    {
        if(pptr->left == ptr)
            pptr->left = NULL;
        else
            pptr->right = NULL;
        free(ptr);
    }
    else if (ptr->left == NULL)
    {
        if(pptr->left == ptr)
            pptr->left = ptr->right;
        else
            pptr->right = ptr->right;
        free(ptr);
    }
    else if (ptr->right == NULL)
    {
        if(pptr->left == ptr)
            pptr->left = ptr->left;
        else
            pptr->right = ptr->left;
        free(ptr);
    }

    else
    {
        suc = ptr->left;
        if(suc->right == NULL)
        {
            suc->right = ptr->right;
            if(pptr->left == ptr)
                pptr->left = suc;
            else
                pptr->right = suc;
            free(ptr);
            return;
        }

        while(suc->right != NULL)
        {
            parent = suc;
            suc = suc->right;
        }
        ptr->data = suc->data;
        parent->right = suc->left;
        free(suc);
    }
}


