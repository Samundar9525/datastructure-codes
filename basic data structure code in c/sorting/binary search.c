#include<stdio.h>

int search(int [],int,int,int ,int );

void main(){
	int size;
	printf("Enter the size of Array : ");
	scanf("%d",&size);
	int arr[size];
			
		int i;
		while(i<size){
			printf("Enter your data : ");
			scanf("%d",&arr[i]);
			i++;
		}

		int choice;
		while(choice!=-1){
			printf("\nENTER the DATA to searched or press -1 :");
			scanf("%d",&choice);
			
			int beg=0,end=size,mid=(beg+end)/2;
			int d=search(arr,choice,beg,end,mid);
			if(d==0){
				printf("\t\tData found");
			}
			else if(d==1){
				printf("\t\tdata not found");
			}
			
		}
	}


int search(int arr[],int data,int beg,int end,int mid){
	int d;
	if(arr[mid]==data){
		return 0;	
		}
		
	if(beg>end || end<0 && arr[mid]!=data){
		return 1;
	}
	
	else{
		if(arr[mid]>data){
			end=mid-1,mid=(beg+end)/2;
				search(arr,data,beg,end,mid);	
		}
		else if(arr[mid]<data){
				beg=beg+1,mid=(beg+end)/2;
					search(arr,data,beg,end,mid);
		}
	}		
}

