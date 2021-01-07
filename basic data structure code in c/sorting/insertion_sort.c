#include<stdio.h>

void insertionsort(int[],int);

void main(){
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("ENTER THE %d ELEMENT : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n \t\t\t Your unsorted array is :   ");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	insertionsort(arr,n);
	printf("\n");
}

 void insertionsort(int arr[], int n){
 	int i , j ,temp;
 	for(i=1 ;i<n;i++){
 		//this is impartant because during the traversing there is one vaccant space is created which can be filled by this temp 
		j=i-1;
		temp=arr[i];
		while((temp< arr[j]) && j>=0){
			arr[j+1]=arr[j];
			j--;
		} 	
 		arr[j+1]=temp;
	 }
	 printf("\n\t\t\t   Your sorted array is :   ");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	 
 }
