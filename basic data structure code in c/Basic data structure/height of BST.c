#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	int height;
	struct node *left;
	struct node *right;
	
};


void insert(struct node *);
void balance(struct node *);
void height(struct node *);
struct node* create();


void main(){
	struct node *root=NULL;
	int choice;
	while(choice!=-1){
		printf("\n##########################\n");
		printf("1.CREATE A BINARY SEARCH TREE\n");
		printf("2.HEIGHT DETAIL\n");
		printf("3.INSERT DATA IN BST\n");
		printf("\n##########################\n");
		printf("press 0 to QUIT : ");
		scanf("%d",&choice);
		if(choice==1){
				root=create();	
				printf("YOUR TREE SUCESSFULLY  CREATED\n");
			}
		if(choice==2){
				height(root);
			}
		if(choice==3){
				insert(root);
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
			temp=root;
		while(temp!=NULL){
			temp2=temp;
			if(item<temp->data)
				temp=temp->left;
				else
					temp=temp->right;
					q->height=nodeheight(q);
		}
		if(item<temp2->data)
			temp2->left=q;		
		else				
			temp2->right=q;
}
}
return root;
}


void height(struct node *root){
int item,i=0,j=0,flag;
printf("\t\t\t\t\tROOT KA DATA :%d \n",root->data);
printf("ENTER THE ITEM : ");
scanf("%d",&item);

while(root->data!=item){
	flag=1;
	if(item<root->data){
		root=root->left;
		i=i+1;
	}
	else{
		root=root->right;
		j=j+1;
	}
	if(root->left==NULL && root->right==NULL &&root->data!=item ){
		flag=0;
	}		
}
//printf("left : %d \t right : %d \n",i,j);
if(flag==1){
	printf("\t\t\t DATA FOUND \n");
	printf("The height of node from the root is : %d",i+j);	
}
else
	printf("\t\t\t NOT FOUND");
}

int nodeheight(struct node *p){
	int hl,hr;
	hl=p && p->left?p->left->height:0;
	hr=p &&p->right?p->right->height:0;

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
		printf("current :%d\n",q->data);
		printf("parent :%d\n",temp2->data);
		
	//yahan balance ka deteil chaiye
		balance(q);
		
}








void balance(struct node *curr){
	int l=0,r=0;
	struct node *currl,*currr;
	currl=currr=curr;
		while(currl->left!=curr){
			curr=curr->left;
			l++;
		}
		while(currr->right!=NULL){
			currr=currr->right;
			r++;
		}
		printf("left: %d      right:%d",l,r);
		
}



	


