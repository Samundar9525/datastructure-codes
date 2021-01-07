#include<stdio.h>
#include <windows.h>
struct node{
	int data;
	struct node *next;
}*p,*q,*temp;
int head=-1;

void main(){
	int choice;
	while(choice!=-1){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("\nPRESS 1 to push data  \n");
	printf("PRESS 2 to pop data \n");
	printf("PRESS 3 to peek data \n");
	printf("PRESS 4 to display data \n");
	printf("ENTER your choice : ");
	scanf("%d",&choice);
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),10);
	printf("\n");
	if(choice== 1){
		push();
	}
	if(choice== 2){
		pop();
	}	
	if(choice== 3){
		peek();
	}
	if(choice== 4){
		display();
	}
}
}



void push(){
	int item;
	printf("insert the data : ");
	scanf("%d",&item);
	p=(struct node*)malloc(sizeof(struct node));
	if(head==-1){
		p->data=item;
		p->next=NULL;		//used to create a head node 
		head=p;
	}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
		}
		p->data=item;
		p->next=NULL;
		q->next=p;
	}
}




void pop(){
	p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	temp=p;
	q=head;
	while(q->next!=temp){
		q=q->next;
	}					//this function  terminate automaically when stack is empty. 
	q=q->next=NULL;		//need correction here;
	free(temp);
}







void peek(){
	p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	printf("the top most element is : %d",p->data);
}

void display(){
		
		temp=head;
		while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	
	printf("\n");
	


}

