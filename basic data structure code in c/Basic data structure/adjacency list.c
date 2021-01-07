#include<stdio.h>
#include<stdlib.h>
int nod;
struct node{
	int data;
	struct node*next;
};

int **create ();
void display(int **);

void main(){
	int choice,**ar;
	while(choice!=-1){
		printf("\n-----------------------\n");
		printf("1.CREATE A ADJACENCY list.\n");
		printf("2.DISPLAY THE ADJACENCY list \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		printf("-------------------------\n");
	if(choice==1){
		ar=create();
	}
	if(choice==2){
		display(ar);
	}
}
}

int **create(){
	int *a,**b,size,i,v,k,neighbour;
	printf("Enter the number of nodes : ");
	scanf("%d",&size);
	nod=size;
	
	a=(int *)malloc(sizeof(int)*size);
	b=(int **)malloc(sizeof(int)*size);
	for(i=0;i<size;i++){
		printf("ENTER THE DATA IN NODES : ");	//this will create the array dynamically and assign data in it 
		scanf("%d",&a[i]);
	}
	printf("\n\n\n");
	printf("\t\t\t\t NOW NODES CONNECTION WITH OTHER NODE GOING TO ESTABLISHED \n");
	for(i=0;i<size;i++){
		printf("Enter the number of edges of %d: ",a[i]);
		scanf("%d",&v);
		for(k=0;k<v;k++){
				struct node *p,*q,*head;
		
				p=(struct node*)malloc(sizeof(struct node));
					
				printf("ENTER THE NEIGHBOUR OF %d : ",a[i]);
				scanf("%d",&neighbour);
			
				if(p){
					p->data=neighbour;
					p->next=NULL;
					b[i]=(int*)&p;			//work here 
				}
				else{
					q=head;
					while(q->next!=NULL){
						q=q->next;
					}
					p->data=neighbour;			//this will link the node of he linked list
					p->next=NULL;
					q->next=p;
				}
				
		}
	
	}
	return b;
} 


void display(int **arr){
	int i;
	for(i=0;i<nod;i++){
		printf("the neighbour are : ");
		struct node *q;
		q=&arr[i];											//work here
		while(q->next!=NULL){
			printf("%d ",q->data);
		}
		printf("\n");
		
	}
	
	
}




