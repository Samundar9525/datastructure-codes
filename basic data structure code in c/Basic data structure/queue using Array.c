#include<stdio.h>
int front=-1;
int rear=-1;
void enqueue(int [],int);
void dequeue(int []);
void peek(int []);
void display(int [],int);

void main(){
	int size,choice;
	printf("enter the size of array : ");
	scanf("%d",&size);
	printf("\n");
	int arr[size];
	while(choice!=-1){
		printf("press 1 for insert data \n");
		printf("press 2 for delete data \n");
		printf("press 3 for peek data \n");
		printf("press 4 for dispaly data \n");
		printf("press -1 for Quit  \n");
			printf("\t\t\tENTER YOUR CHOICE :");
		scanf("%d",&choice);
		
	if(choice==1)
		enqueue(arr,size);
		else if(choice==2)
			dequeue(arr);
			else if(choice==3)
				peek(arr);
				else if (choice==4)
					display(arr,size);
} 
}


void enqueue(int arr[],int size){
	int item;
	if(rear==size-1){
		printf("\n\t\t\t\t WARNING ! Queue is FULL \n");
	}
	else{
		if (front=-1){
		front=0; 	// only for traversing because traversing strat from zero
	}
		printf("enter your item : ");
		scanf("%d",&item);
		rear=rear+1;
		arr[rear]=item;
		printf("data enqueued \n\n");
	}
}

void dequeue(int arr[]){
	int temp;
	if(front==-1 || front>rear)
	printf("\n\t\t\t\t WARNING ! Queue is EMPTY \n");
	else{
		front++;
			printf("data dequeued \n\n");
	}
}


void peek(int arr[]){
	printf("the top element of QUEUE is : %d \n", arr[front]);
}

void display(int arr[],int size){
	int i;
	if(front==-1 || front>rear){
		printf("\n\t\t\t\t WARNING ! Queue is EMPTY \n");
	}
	else{
		printf("the QUEUE element are : \n");
		printf("-------------------------------\n");
	for (i=front;i<=rear;i++){
		printf("%d  ",arr[i]);
	}
		printf("\n-------------------------------\n");
}
}

