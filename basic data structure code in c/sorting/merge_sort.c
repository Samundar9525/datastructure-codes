#include<stdio.h>

void mergesort(int[],int,int);
void merge(int arr[],int ,int ,int);
	
void main(){
	int arr[6]={39,27,43,3,9,82,10};		//here we already created an array of size 6 instead of taking input from user
		int i;
		printf("Your unsorted array is :  ");
		for (i=0;i<6;i++){
			printf("%d ",arr[i]);
		}
		int ub=5,lb=0;
		mergesort(arr,lb,ub);		//calling the sort function
		
		printf("\n\nYour sorted array is :  ");
		for (i=0;i<6;i++){
			printf("%d ",arr[i]);
		}	
}

void merge(int a[],int lb,int mid,int ub){
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[6],x;
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	//now there are situation that there are some element left in any of side 
	//to deal with that we give one more situation
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	
	}	
	for(x=lb;x<k;x++){
		a[x]=b[x];
	}
	}
			
	void mergesort(int a[],int lb,int ub){
	int mid;
		if(lb<ub){
				mid=(ub+lb)/2;
				mergesort(a,lb,mid);	//for left array
				mergesort(a,mid+1,ub);	//for right array
				merge(a,lb,mid,ub);		//this will sort the data		
	}
	}

