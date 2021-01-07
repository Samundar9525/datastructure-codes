#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	int height;
	struct node *left;
	struct node *right;
	
};
void insert(struct node *);
struct node* create();
void preorder(struct node *);


void main(){
	struct node *root=NULL;
	int choice;
	while(choice!=-1){
		printf("1.CREATE A BINARY SEARCH TREE\n");
		printf("2.INSERT DATA IN BST\n");
		printf("3.PREORDER\n");
		printf("press 0 to QUIT : ");
		scanf("%d",&choice);
		if(choice==1){
				root=create();	
				printf("YOUR TREE SUCESSFULLY  CREATED\n");
			}
		if(choice==2){
				insert(root);
			}
		if(choice==3){
			printf("\n---------------------------------------\n");
			printf("\tPREORDER :\n");
			preorder(root);	
			printf("\n---------------------------------------\n");
			}
}		
}


struct node* create(){
	struct node *temp,*temp2,*q,*root=NULL;
	int item;
	
	while(item!= -1){	
	printf("Enter the data : ");
	scanf("%d",&item);
	if(item==-1){
		break;
	}
	q=(struct node *)malloc(sizeof(struct node));
	q->left=NULL;
	q->right=NULL;	
	if(root==NULL){
		q->data=item;
		q->height=1;
		root=q;	
	}
	else{
		q->data=item;
				q->height=nodeheight(q);		
			temp=root;
		while(temp!=NULL){
			temp2=temp;
			if(item<temp->data)
				temp=temp->left;
				else
					temp=temp->right;
				
		}
			
		if(item<temp2->data)
			temp2->left=q;			 
		else{
				
			temp2->right=q;
		}
		
	}
	
}
return root;
}


void preorder(struct node *root){
	if(root==NULL){
		return;
	}
	printf("data:%d  height :%d     ",root->data,root->height);
	preorder(root->left);
	preorder(root->right);

}

int nodeheight(struct node *p){
	printf("hello \n");
	int hl,hr;
	while(p->left!=NULL){
		hl=hl+1;
		p=p->left;
	}
	
		while(p->right!=NULL){
		hr=hr+1;
		p=p->right;	
	}
	printf("left : %d		right: %d\n",hl,hr);
	return hl>hr?hl+1:hr+1;
}

void insert(struct node *root){
	int item;
	printf("INSERT THE DATA ITEM IN TREE : ");
	scanf("%d",&item);
	
	struct node *q,*temp,*temp2;
	
	q=(struct node *)malloc(sizeof(struct node));
	q->data=item;
	q->left=NULL;
	q->right=NULL;	
	temp=root;
	while(temp!=NULL){
		temp2=temp;
		
		if(item<temp->data)
			temp=temp->left;
		else
			temp=temp->right;
	}
	if(item<temp2->data)
		temp2->left	=q;
	else
		temp2->right=q;
		q->height=nodeheight(q);

}



