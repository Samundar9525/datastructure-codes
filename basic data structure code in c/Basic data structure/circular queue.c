#include<stdio.h>
void enqueue(int [],int);
void dequeue(int [],int);
void peek();
void display(int [],int);
int front=-1;
int rear=-1;

void main(){
	int size;
	printf("enter the size of Queue : ");
	scanf("%d",&size);
	int arr[size];
	int choice;
	while(choice!=-1){
		printf("1.INSERT \n");
		printf("2.DELETE \n");
		printf("3.DISPLAY \n");
		printf("\t\t\t\tEnter your choice : ");
		scanf("%d",&choice);
		
		if(choice == 1)
			enqueue(arr,size);
			if(choice==2)
				dequeue(arr,size);
					if (choice==3)
						display(arr,size);
	}
}


void enqueue(int arr[],int size){
	if(front== (rear+1)%size){
		printf("Queue is Full \n");
	}
	else{
		int item;
		printf("ENTER DATA: ");
		scanf("%d",&item);
	
	if(front==-1 && rear==-1){
		front=rear=0;
		arr[rear]=item;
	}
	else{
		rear=(rear+1)%size;
		arr[rear]=item;
		printf("\t DATA inserted\n");
	}
	
}
printf("front:%d		rear:%d\n",front,rear);
}

void dequeue(int arr[],int size){
	if(front ==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		front=(front+1)%size;
		int temp;
		temp=arr[front];
		printf("data deleted\n");
	}
	printf("front:%d		rear:%d\n",front,rear);
}
void display(int arr[],int size){
	int i;
	i=front;
	if (front==-1 && rear==-1){
			printf("Queue is empty\n");
	}
	else{
		while(i!=rear){
			printf("%d  ",arr[i]);
			i=(i+1)%size;
		}
		printf("%d \n",arr[rear]);
	}
		printf("\nfront:%d		rear:%d\n\n",front,rear);
}
