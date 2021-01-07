#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*q,*p,*head;


struct node *insert_beg(struct node * );
struct node *insert_end(struct node *);
struct node *insert_mid(struct node *);
struct node *delete_beg(struct node * );
struct node *delete_end(struct node * );
struct node *delete_any(struct node * );

void main(){

		int choice,item ;
		q=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter the data for head node : ");
		scanf("%d",&item);
		q->data=item;
		q->next=NULL;
		head=q;
		printf("\n\t\t\t YOUR HEAD NODE and DATA inserted Sucessfully");
	
	
	while(choice!=-1){
		printf("\n\n\t\t\t***********************************\n");
		printf("\t\t\t press 1 to insert data at begining\n ");
		printf("\t\t\t press 2 to insert data at end\n ");
		printf("\t\t\t press 3 to insert data at middle\n");
		printf("\t\t\t press 4 to delete data at begining\n");
		printf("\t\t\t press 5 to delete data at end\n");
		printf("\t\t\t press 6 to delete data at any where\n");
		printf("\t\t\t press 0 show the data\n");
		printf("\t\t\t ENTER YOUR CHOICE :");
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
			p=head;
			printf("-----------------------your data are--------------------\n");
			while(p!=NULL){
			printf("%d   ",p->data);
			p=p->next;
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
				// loop chalana hai taki last node tak pahuc sake aur phir usna 
				//next node se null nikal karr naya node ka address assign kar sake
			p=head;
			while(p->next!=NULL){
				p=p->next;
				}					//iska traseversing technique display wala se different hai see while ka codition
				p->next=q;			//loop last node me jakar ruk jayega uuuse aage nahi jayedga
				q->next=NULL;
		printf("\n \t\t\t   YOUR DATA AT END SUCESSFULLY INSERTED ");
	return head;		
}

struct node *insert_mid(struct node *head){
	int item,pos,i;
		q=(struct node*)malloc(sizeof(struct node));
			printf("\n Enter the data : ");
			scanf("%d",&item);
			printf("\n Enter the position : ");
			scanf("%d",&pos);
				q->data=item;    //yahan par condition lagana padege kyunki 3 dabakar hum 1st pos me data nahi bhar pa rahe hai
								//aisa condition lagana hoga jiise ki pos jab 1 dale to insert at beginnig wala fun chale 		
				p=head;			//aur last element dale toh insert at end wala funtion chale aur beyond dale toh warning print kare 
				for(i=1;i<pos-1&&p!=NULL;i++){
					p=p->next;
				}
				q->next = p->next;
				p->next=q;
		printf("\n \t\t\t   YOUR DATA AT  %d postion SUCESSFULLY INSERTED ",pos);
	return head;		
}

struct node *delete_beg(struct node *head){
	struct node *temp;
	temp=head;
	head=temp->next;//isme bhi ek restriction lagana hoga  jo empty 
					//hone ke baad warning de aur flow of execution ko bahar na nikale 
	free(temp);
		printf("\n \t\t\t   YOUR DATA from BEGINING SUCESSFULLY DELETED ");
	return head;
}

struct node *delete_end(struct node *head){
	struct node *temp;
			p=head;
			while(p->next!=NULL){
				p=p->next;
				}					//iska traseversing technique display wala se different hai see while ka codition
				temp=p;
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
							q->next=temp->next;
				}
				p=p->next;
			}
			free(temp);
			
		printf("\n \t\t\t   YOUR DATA %d AT postion SUCESSFULLY DELETED ",item);
	return head;		
}






