//	**********************************		DOUBLY LINKED LIST	********************************************
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
}*q,*p,*head,*t;


struct node *insert_beg(struct node * );
struct node *insert_end(struct node *);
struct node *insert_mid(struct node *);
struct node *delete_beg(struct node * );
struct node *delete_end(struct node * );
struct node *delete_any(struct node * );

void main(){

		printf("****************************************\t  DOUBLY LINKED LIST \t*******************************************\n");
		int choice,item ;
		q=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter the data for head node : ");
		scanf("%d",&item);
		q->data=item;
		q->next=NULL;
		q->prev=NULL;
		head=q;
		printf("\n YOUR HEAD NODE and DATA inserted Sucessfully");
	
	
	while(choice!=-1){
		printf("\n\n***********************************\n");
		printf(" press 1 to insert data at begining\n ");
		printf(" press 2 to insert data at end\n ");
		printf(" press 3 to insert data at middle\n");
		printf(" press 4 to delete data at begining\n");
		printf(" press 5 to delete data at end\n");
		printf(" press 6 to delete data at any where\n");
		printf(" press 0 show the data\n");
		printf("\n\n***********************************\n");
		printf(" ENTER YOUR CHOICE :");
		scanf("%d",&choice);
		
		if(choice==1){
			head=insert_beg(head);	
		}
		if(choice==2){
			head=insert_end(head);
		}
		if(choice==3){
			head=insert_mid(head);
		}
		if(choice==4){
			head=delete_beg(head);	
		}
		if(choice==5){
			head=delete_end(head);
		}
		if(choice==6){
				head=delete_any(head);	
		}
		
		
		
			
		if(choice==0){
			struct node *f;
			p=head;
			printf("\n\n");
			printf("-----your data is in forward mode--------\n");
			while(p->next!=NULL){
			printf("%d   ",p->data);
			p=p->next;	
			}
			printf("%d   ",p->data);
	//since there are next and prev  both pointer present so traversing in both direcion will give a idea 
	//about the doubly linked list;
			f=p;
			printf("\n-----your data is in reverse mode--------\n");
			while(f!=NULL){
			printf("%d   ",f->data);
			f=f->prev;
		}	
		}	
	}
}




struct node *insert_beg(struct node *head){
	int item;
		q=(struct node*)malloc(sizeof(struct node));
			printf("\n Enter the data : ");
			scanf("%d",&item);
				q->data=item;
				q->next=head;
				head->prev=q;
				q->prev=NULL;
			head=q;
		printf("\n \t\t\t   YOUR DATA AT BEGINING SUCESSFULLY INSERTED ");
	return head;
		
}








struct node *insert_end(struct node *head){
	int item;
		q=(struct node*)malloc(sizeof(struct node));
			printf("\n Enter the data : ");
			scanf("%d",&item);
				q->data=item;
				
			p=head;
			while(p->next!=NULL){
				p=p->next;
				}					
				p->next=q;			
				q->next=NULL;   //**
				q->prev=p;		//**
		printf("\n \t\t\t   YOUR DATA AT END SUCESSFULLY INSERTED ");
	return head;		
}

struct node *insert_mid(struct node *head){
	int item,pos,i;
		t=(struct node*)malloc(sizeof(struct node));//coded by samundar by craeting an temprorary node not a pointer only
		q=(struct node*)malloc(sizeof(struct node));
			printf("\n Enter the data : ");
			scanf("%d",&item);
			printf("\n Enter the position : ");
			scanf("%d",&pos);
				q->data=item;    
						 		
				p=head;			
				for(i=1;i<pos-1;i++){
					p=p->next;
				}
				q->next = p->next;
				t=p->next;
				t->prev=q;    //coded by samundar
				q->prev=p;	  //coded by samundar          
				p->next=q;		//coded by samundar
		
		printf("\n \t\t\t   YOUR DATA AT  %d postion SUCESSFULLY INSERTED ",pos);
		free(t);
	return head;		
}






struct node *delete_beg(struct node *head){
	struct node *temp;
	temp=head;
	head=temp->next; 	//next connection ke liye
	head->prev =NULL;  //prev connection ke liye
	free(temp);
		printf("\n \t\t\t   YOUR DATA from BEGINING SUCESSFULLY DELETED ");
	return head;
}











struct node *delete_end(struct node *head){
	struct node *temp;
			p=head;
			while(p->next!=NULL){
				p=p->next;
				}					
			temp=p;			//simillar to linked list but different from circular linked list
			q=head;
			while(q->next!=temp){
				q=q->next;
			}	
			q->next=NULL;
			free(temp);
		printf("\n \t\t\t   YOUR DATA AT END SUCESSFULLY INSERTED ");
	return head;
}



struct node *delete_any(struct node *head){
	int item;
	struct node *temp;
			printf("\n Enter the data : ");
			scanf("%d",&item);
			p=head;
			while(p->next!=NULL){
				if(p->data==item){
					temp=p;
					
					q=head;
						while(q->next!=temp){
							q=q->next;
							}
							q->next=temp->next; // next link ban jayega 
							// prev link banane ke liye either you use one more while loop or use my technique
							//create a optional temproary node 
							t=(struct node*)malloc(sizeof(struct node));
							t=temp->next;
							t->prev=q;	//sucessfully implemented but it consume one extra node space unable to free it

				}
				p=p->next;
			}
			free(temp);
			
		printf("\n \t\t\t   YOUR DATA %d AT postion SUCESSFULLY DELETED ",item);
	return head;		
}






