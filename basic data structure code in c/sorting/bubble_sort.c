#include<stdio.h>

void bubblesort(int[],int);

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
	
	bubblesort(arr,n);
}

void bubblesort(int a[],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		printf("\n");
		printf("\n \t\t\t    Your sorted array is:   ");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}

}
