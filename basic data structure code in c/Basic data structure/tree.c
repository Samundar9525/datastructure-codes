#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* create();
void preorder(struct node *);
void postorder(struct node *);
void inorder(struct node *);

void main(){
	struct node *root=NULL;
	int choice;
	while(choice!=-1){
		printf("\n##########################\n");
		printf("1.INSERT DATA IN TREE\n");
		printf("2.PREORDER TRAVERSAL\n");
		printf("3.POSTORDER TRAVERSAL\n");
		printf("4.INORDER TRAVERSAL\n");
		printf("\n##########################\n");
		printf("press 0 to QUIT : ");
		scanf("%d",&choice);
		
		if(choice==1){
			root=0;
			root=create();
			}
		if(choice==2){
			printf("\n---------------------------------------\n");
			printf("\tPREORDER :\n");
			preorder(root);	
			printf("\n---------------------------------------\n");
			}
		if(choice==3){
			printf("\n---------------------------------------\n");
			printf("\tPOSTORDER :\n");
			postorder(root);	
			printf("\n---------------------------------------\n");
			}
		if(choice==4){
			printf("\n---------------------------------------\n");
			printf("\tINORDER :\n");
			inorder(root);	
			printf("\n---------------------------------------\n");
			}			
	}
}



struct node* create(){
	int item;
	struct node *q;
	printf("\t\tPress -1 to exit insertion");
	q=(struct node *)malloc(sizeof(struct node));	
	printf("\n\t\tenter data ");
	scanf("%d",&item);
	q->data=item;
	if(item==-1){
		return 0; 	//base case which terminate the recursion
	}
	else{

			printf("enter the left child of %d\n ",item);
			q->left=create();	//ye baar baar create() ko call karta rahega jabtak hum log item me -1 nahi dalenge 
			printf("enter the right child of %d\n",item);
			q->right=create();
			
	}
	return q;
}

void preorder(struct node *root){

	if(root==0){
		return;
	}
	printf("%d  ",root->data);
	preorder(root->left);
	preorder(root->right);

}
void postorder(struct node *root){

	if(root==0){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d  ",root->data);
}
void inorder(struct node *root){

	if(root==0){
		return;
	}
	inorder(root->left);
	printf("%d  ",root->data);
	inorder(root->right);
}
