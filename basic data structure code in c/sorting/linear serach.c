#include<stdio.h>

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
	printf("\t\t\tENTER the DATA to searched or press -1 :");
	scanf("%d",&choice);
	if(choice==-1)
		break;
	else{
		for(i=0;i<size;i++){
			if(choice==arr[i]){
			printf("\t\t\t\t%d is found in %d position \n\n",choice,i);
					break;
			}	
			else
				printf(" %d not found %d position \n",choice,i);
			}
	}
}}
