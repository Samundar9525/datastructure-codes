#include<stdio.h>
int top=-1;
void main(){
	int i,size;
	printf("enter the size of array : ");
	scanf("%d" ,&size);
	int arr[size];
	int stack[size];
	for (i=0;i<size;i++){
		printf("enter value : ");	//initializing values in array
		scanf("%d",&arr[i]);
	}
		printf("\nARRAY element before reversing :");	
	for (i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
		
	for(i=0;i<size;i++){
		top=top+1;			//preform push operation;
		stack[top]=arr[i];
	}
	
	for(i=0;i<size;i++){
		int val;
		val=stack[top--];	//perform pop operation;
		arr[i]=val;
	}
	
	printf("\n");	
	printf("\nARRAY element after  reversing :");
	
	for (i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
}
