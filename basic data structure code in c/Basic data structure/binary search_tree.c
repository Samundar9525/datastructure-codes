#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node* create();
void preorder(struct node *);
void insert(struct node *);
void postorder(struct node *);
void inorder(struct node *);
void search(struct node *);
void deletenode(struct node *);

void main(){
	struct node *root=NULL;
	int choice;
	while(choice!=-1){
		printf("\n##########################\n");
		printf("1.CREATE A BINARY SEARCH TREE\n");
		printf("2.INSERT DATA IN BST\n");
		printf("3.PREORDER DATA of BST\n");
		printf("4.POSTORDER TRAVERSAL\n");
		printf("5.INORDER TRAVERSAL\n");
		printf("6.SEARCH ELEMENT : \n");
		printf("7.DELETE ELEMENT : \n");
		printf("\n##########################\n");
		printf("press 0 to QUIT : ");
		scanf("%d",&choice);
		if(choice==1){
				root=create();	
				printf("YOUR TREE SUCESSFULLY  CREATED\n");
			}
			if(choice==2){
				insert(root);	
				printf("YOUR DATA INSERTED IN TREE SUCESSFULLY \n");
			}
			if(choice==3){
			printf("\n---------------------------------------\n");
			printf("\tPREORDER :\n");
			preorder(root);	
			printf("\n---------------------------------------\n");
			}
			if(choice==4){
			printf("\n---------------------------------------\n");
			printf("\tPOSTORDER :\n");
			postorder(root);	
			printf("\n---------------------------------------\n");
			}
		if(choice==5){
			printf("\n---------------------------------------\n");
			printf("\tINORDER :\n");
			inorder(root);	
			printf("\n---------------------------------------\n");
			}
		if(choice==6){
			search(root);	
			}
		if(choice==7){
				deletenode(root);
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
		root=q;	//this will create the root node according to which data is filled in BST format
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
		}
		if(item<temp2->data)
			temp2->left=q;			//this will insert 
		else				
			temp2->right=q;
	}
}
return root;
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
}

void preorder(struct node *root){
	if(root==NULL){
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
 
 void search(struct node *root){
 	struct node *temp,*temp2;
 	int item;
 	int flag;
 	printf("Enter data for search : ");
 	scanf("%d",&item);
		temp=root;
		if(item==temp->data){
			flag=1;
		}
		else{
 		while(temp!=NULL ){
		if(item<temp->data){
			temp=temp->left;
		}
		else{
			if(temp->data==item){
					flag=1;
					break;
				}
			else{
				temp=temp->right;
			}		
		}	
	}
}
	printf("%d",flag);
	if(flag==1){
		printf("\t\t\t FOUND FOUND FOUND FOUND\n");
		printf("left : %d \n",temp->left);
		printf("right : %d \n",temp->right);
	}
	else if(flag==0)
		printf("\t\t\t NOT FOUND \n");
 }





  void deletenode(struct node *root){
 	int item;
 	printf("ENTER THE DATA ITEM TO BE DELETE :");
 	scanf("%d",&item);
 	
 	struct node *temp,*parent,*current;
 	int flag=0;
		temp=root;
		while(temp!=NULL){
			
		if(item<temp->data){
				parent=temp;
				temp=temp->left;
				
		}
		else{
			if(item==temp->data){
					flag=1;
					current=temp;
					break;
				}
				else{
					parent=temp;
					temp=temp->right;
				}
		}
	}
 		
		 if(flag==0){
 			printf("NOT FOUND \n");
		 }

 		else{		
//-----------------------------when the deleting node has no child
 			if(current->left==NULL && current->right==NULL){
			 		printf("----------------\t NO CHILD------------------\n");	
				 	if(parent->left==current){
				 		parent->left=NULL;
					 }
					 else if(parent->right==current){
					 	parent->right=NULL;
					 } 
					 	free(current);
			 }
		
//-----------------------------	when the deleting node has one  child
			else if(current->left!=NULL &&current->right == NULL){
					printf("----------------\t ONE CHILD------------------\n");	
				if(parent->right==current){
							parent->right=current->left;
						}
						else if(parent->left==current){
							parent->left=current->left;
						}
						free(current);
			}	
				
				else if(current->right!=NULL &&current->left == NULL){
						printf("----------------\t one CHILD------------------\n");	
						if(parent->right==current){
							parent->right=current->right;
						}
						else if(parent->left==current){
							parent->left=current->right;
						}
						free(current);
			}	
//----------------------------------------------------------------------------------------------------------------------------------		
			else if(current->left!=NULL &&current->right != NULL){
				printf("----------------\t TWO CHILD------------------\n");	
				struct node *leftmost, *tra;
				leftmost=current;
				leftmost=leftmost->left;
				tra=leftmost;
				while(leftmost->right!=NULL){
					leftmost=leftmost->right;
				}
				
				current->data=leftmost->data;	//by doing this we can can replace our current
											// node data now we have to remove the data node from which data is replaced
				 while(tra->right!=leftmost){			// yahan link banana hai 
				 	if(tra->right==NULL){
				 		current->left=tra->left;	//ye us condition ke liye hai jab mera leftmost node ka right pehle se hi null ho
						 break;	
					 }
				 	tra=tra->right;
				 }
					tra->right=leftmost->left;
					free(leftmost);
			}
 					printf("\t\t\t DATA DELETED \n");
		 }
}

 
 
 
 
 


//					just to chek the code working :-
//1
//30
//28
//32
//20
//29
//38
//15
//25
//10
//17
//12
//18
//5
//22
//26
//23
//35
//50
//-1

				//   			code to delete the data :
//7
//30
//3
//7
//28
//3
//7
//32
//3
//7
//20
//3
//7
//29
//3
//7
//38
//3
//7
//15
//3
//7
//25
//3
//7
//10
//3
//7
//18
//3
//7
//12
//3
//7
//17
//3
//7
//5
//3
//7
//22
//3
//7
//26
//3



//7
//35
//3
//7
//50
//3

//7
//23
//3

							


