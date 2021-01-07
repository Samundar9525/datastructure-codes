#include<stdio.h>

void selectionsort(int[],int);

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
	printf("\n");
	selectionsort(arr,n);
}

void selectionsort(int arr[],int n){
	int i,j,temp,min,k;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min =j;
			}
		}
	//	here swapping are performed
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;	
	}
	printf("\n \t\t\t   Your sorted array is :   ");
	for(k=0;k<n;k++){
		printf("%d  ",arr[k]);
	}
	
	printf("\n\n");
}
