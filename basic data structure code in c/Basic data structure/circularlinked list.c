//				****************************	CIRCULAR LINKED LIST ***************************
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
			head=q;      //order ka dhayan rakhe 
		q->next=head;
			 
		printf("%d",head->data);
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
			p=head;
			printf("\n\n---------------your data are---------\n");
//			do{
//				printf("%d   ",p->data);
//				p=p->next;	
//			}while(p!=head);

			while(p->next!=head){
				printf("\t");
			printf("%d\t",p->data);        //either use do while or this method to print all element 
			p=p->next;
		}
				printf("\t%d",p->data);	//this statement prints the last node data 
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
				
			p=head;
			while(p->next!=head){
				p=p->next;
			}
			p->next=q;
			head=q;       //yahan last me head me assign ho raha hai take care 
			
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
			while(p->next!=head){
				p=p->next;
				}					
				p->next=q;			
				q->next=head;
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
				q->data=item;   
								 		
				p=head;							
				for(i=1;i<pos-1 && p->next!=head;i++){  // yaha alteration hua hai
					p=p->next;
				}
				q->next = p->next;
				p->next=q;
		printf("\n \t\t\t   YOUR DATA AT  %d postion SUCESSFULLY INSERTED ",pos);
	return head;		
}

struct node *delete_beg(struct node *head){
	struct node *temp;
	 p=head;
	 while(p->next!=head){
	 	p=p->next;
	 }
	 	temp=head;
		head=temp->next;
	 	p->next=head;      //some error occur not able to delete the first element 
		free(temp);
		printf("\n \t\t\t   YOUR DATA from BEGINING SUCESSFULLY DELETED ");
	
	return head;
}

struct node *delete_end(struct node *head){
	struct node *temp;
			p=head;
			while(p->next!=head){
				p=p->next;
				}					
				temp=p;
			q=head;
			while(q->next!=temp){
				q=q->next;
			}	
			q->next=head;
			free(temp);  //yahan  bhi last data delete nahi hua ek constraint lagana hoga.
		printf("\n \t\t\t   YOUR DATA AT END SUCESSFULLY DELETED ");
	return head;
}
struct node *delete_any(struct node *head){
	int item;
	struct node *temp;
			printf("\n Enter the data : ");
			scanf("%d",&item);
			p=head;
			while(p->next!=head){
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






