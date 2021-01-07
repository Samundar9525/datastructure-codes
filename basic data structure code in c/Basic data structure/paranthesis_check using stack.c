#include <stdio.h>
#include <string.h>
int stack[50];
int array[50];
int top=-1;
void push(char);
char pop();
void main()
{
	char val[50],i,temp,j;
    printf("Enter a expression : ");
    gets(val);
    int flag = 1;
   for(i=0;i<=strlen(val);i++){
   		if( val[i]=='(' || val[i]=='{' || val[i]=='['){
   			push(val[i]);
			   }
   				if( val[i]==')' || val[i]=='}' || val[i]==']'){
		   			if(top==-1){
		   				flag=0;
						 }
					
					else{
						temp=pop();
						printf("%c",temp);
						printf("%c",val[i]);      //just for printing the Parentheses for better view
							if( val[i]==')' && (temp=='{' || temp=='[' )  ){
									flag=0;
							}
							if( val[i]=='}' &&( temp=='(' || temp=='[' )  ){
									flag=0;
							}
							if( val[i]==']' && ( temp=='{' || temp=='(' ) ){
									flag=0;
							}
		   				}
			
   					}
   	
}


		if(top>=0)
		flag=0;
			if(flag==0){
				printf("\ninvalid expression");
			}
			if(flag==1){
					printf("\nvalid expression");
			}
}

void push(char val){
	top=top+1;
	int i;
	stack[top]=val;
}
							//				sample for check up {a+b-(c+t)+[f+h]} +[s+f]           {a+b)+
char pop(){
	return(stack[top--]);
}
