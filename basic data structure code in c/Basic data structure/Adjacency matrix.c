#include<stdio.h>
#include<stdlib.h>
int node;

int **create();
void display(int **);

void main(){
	int choice,**ar;
	while(choice!=-1){
		printf("\n-----------------------\n");
		printf("1.CREATE A ADJACENCY MATRIX.\n");
		printf("2.DISPLAY THE ADJACENCY MATRIX \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		printf("-----------------------\n");
	if(choice==1){
		ar=create();
	}
	if(choice==2){
		display(ar);
	}
}
}
	
int  **create(){
	int data,i ,j;
	printf("ENTER THE NUMBER OF NODES :");
	scanf("%d",&data);
	node=data;
	
	int **arr;
	arr=(int **)malloc(sizeof(int) * (node *node));	//this will create my array dynamically
	for(i=0;i<node;i++){
		arr[i]=(int *)malloc( node*sizeof(int));
	}
	
	for(i=0;i<node;i++){
		for(j=0;j<node;j++){
			arr[i][j]=0;				//this will set all the values of 2d default as 0;
		}
	}
	
	int u[node],v,k,neighbour,p;
	for(i=0;i<node;i++){
		printf("ENTER THE VALUES OF NODES :");
		scanf("%d",&u[i]);
	}
	printf("\n");
	for (k=0;k<node;k++){
	printf("ENTER THE NUMBER OF EDEGES of %d :",u[k]);
	scanf("%d",&v);
	for(p=0;p<v;p++){
		printf("ENTER NEIGHBOUR OF  %d :",u[k]);
		scanf("%d",&neighbour);
	for(j=0;j<node;j++){
		if(neighbour==u[j]){
			arr[k][j]=1;
		}
	}
	}
	}
	return arr;

}

void display(int **arr){
int i,j;
for(i=0;i<node;i++){
	for(j=0;j<node;j++){
		printf("%d    ",arr[i][j]);
	}
	printf("\n");
}
	
}

