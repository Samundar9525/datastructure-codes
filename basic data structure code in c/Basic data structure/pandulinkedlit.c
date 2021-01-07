#include<stdio.h>
#include<stdlib.h>
struct node
{	
	int data;	
	struct node* next;
}*new,*prev,*temp,*start,*end,*p;

void main(){
	int choice;
	int data;
		while(choice!=-1){
			printf("\n----------\n");
			printf("press 1 to insert at begining\n");
			printf("press 2 to insert at End\n");
			printf("press 3 to insert at any position \n");
			printf("press 0 to see the data \n");
			
			scanf("%d",&choice);
			
			if(choice==1){
				int data;
				data=insertdata();
				insertbegin(data);
			}
			else if(choice==2){
				int data;
				data=insertdata();
				insertend(data);
			}
			else if(choice==3){
				int data;
				data=insertdata();
				insertpos(data);
			}
			
			else if(choice==0){
				p=start;
				while(p!=NULL){
					printf("%d   ",p->data);
					p=p->next;
				}
			}	
		}//while end 
	
	
	
}

int insertdata(){
	int item;
	printf("ENTER THE DATA : ");
	scanf("%d",&item);
	return item;
}

int isempty(){
	return start==NULL;
}
				///insertion modules
int insertbegin(int data){	
	createNode(data);
	if(isempty())
		end=start=new;
	else{		
		new->next=start;
		start=new;
	}
	printf("your data at begining inserted sucessfully");	
}

int createNode(int data){	
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;	
	new->next=NULL;
}

int insertend(int data){	
	createNode(data);
	if(isempty())
		end=start=new;
	else{		
		end->next=new;
		end=new;
		}	
			printf("your data at end inserted sucessfully");
}

int insertpos(int data){
	int pos;
	printf("ENTER THE POSITION : ");
	scanf("%d",&pos);	
	int i=1;	
	createNode(data);
	if(isempty())		
		end=start=new;
	else
	{		
		temp=start;		
		while(temp->next!=NULL&&i<pos-1){			
			temp=temp->next;	
			i++;		
		}	
		if(temp->next==NULL&&i<pos-1){		
			end->next=new;	
			end=new;
		}		
		else if(pos==1){			
			new->next=start;	
			start=new;	
		}		
		else{
			new->next=temp->next;
			temp->next=new;	
}	
}	
}
									//deletion modules
									
