#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*p,*q;

struct node *front=NULL;
struct node *rear=NULL;
void insert();
void del();
void display();

void main(){
	int choice;
	while(choice!= -1){
		printf("1.INSERT \n");
		printf("2.DELETE \n");
		printf("3.DISPLAY \n");
		printf("\t\t Enter Your Choice :");
		scanf("%d",&choice);
		printf("\n");
		
		if(choice==1)
			insert();
			if(choice==2)
				del();
				if(choice==3)
					display();	
}
}
void insert(){
	int item;
	q=(struct node*)malloc(sizeof(struct node));
	printf("insert the element : ");
	scanf("%d",&item);
			
	if(front==NULL|| rear==NULL){
		q->data=item;
		q->next=NULL;
		front=rear=q;
		printf("\t\tdata inserted \n");
	}
	else{
		q->data=item;
		q->next=NULL;
		rear->next=q;
		rear=q;
		printf("\t\tdata inserted \n");
	}
	
}

void del(){
	struct node *temp;
	if(front== NULL){
		printf("\t\t\tWarning! Queue is Empty\n");
	}
	else{
	temp=front;
	front=temp->next;
	free(temp);
	printf("\t\tdata  deleted successfully\n");
	}
}

void display(){
	printf("-------------------------------\n");
	p=front;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n-------------------------------\n");
	printf("front:%d			rear:%d\n",front,rear);
}
