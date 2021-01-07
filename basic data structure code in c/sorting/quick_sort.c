#include<stdio.h>

int partition(int[],int ,int);
void quicksort(int[],int,int);
void swap(int arr[],int a,int b);

void main(){
		int arr[6]={3,6,5,2,4,1};		//here we already created an array of size 6 instead of taking input from user
		int i ;
		printf("Your unsorted array is :  ");
		for (i=0;i<6;i++){
			printf("%d ",arr[i]);
		}
		int ub=5,lb=0;
		quicksort(arr,lb,ub);		//calling the sort function
		
		printf("\n\nYour sorted array is :  ");
		for (i=0;i<6;i++){
			printf("%d ",arr[i]);
		}	
}
									//swapping function defined
void swap(int arr[],int a,int b){
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
//Partition function defined
int partition(int arr[], int lb, int ub){
	int pivot=arr[lb];
	int start=lb;
	int	end=ub;
	
	while(start<end){
		while(arr[start]<=pivot){
			start++;
		}
		while(arr[end]>pivot){
			end--;
		}
		if(start<end){
		swap(arr,start,end);
		}
	}
	swap(arr,end,lb);
	return end;
}
// sorting function defined
void quicksort(int arr[],int lb,int ub){
	int d;
	if (lb<ub){
		d=partition(arr,lb,ub);
		quicksort(arr,lb,d-1);
		quicksort(arr,d+1,ub);
	}
}
