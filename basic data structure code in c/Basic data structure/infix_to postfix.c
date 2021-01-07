#include<stdio.h>
#include<string.h>
int top = -1;
void push(char); 								//	example to test the program	:- (a+b)-(c*d-t)*g
int precedence(char);
char data[50],postfix[50],stack[50];
int is_operator(char symbol);
char pop();

void main() {
  int i, p, j = 0;
  char item, temp;
  printf("enter the expression : ");
  gets(data);
											
  for (i = 0; i < strlen(data); i++) {			// program start scaning the data from left to right this loop only scan the data 
    item = data[i];

    if (item == '(') {
      push(item);								// if a open parenthesis encounter it will push it into the stack 
    }

    if (item >= 'A' && item <= 'Z' || item >= 'a' && item <= 'z') {
      postfix[j] = item;						//	if any operands encounter it will it add that operand directly to the postfix array
      j++;
    }

    if (is_operator(item) == 1) {				//here we call a function is_opertor() which check whether it is a operator or not
      temp = pop();
      while (is_operator(temp) == 1 && precedence(temp) > precedence(item)) { // here we call a function precedence which check the precedence
        postfix[j] = temp;
        j++;
        temp = pop();
      }
      push(temp);
      push(item);
    }

    if (item == ')') {
      temp = pop();
      while (temp != '(') {
        postfix[j] = temp;
        j++;
        temp = pop();
      }
    }

  }

  while (top > -1) {
    postfix[j] = pop();
    j++;
  }

  printf("postfix expression : ");
  for (p = 0; p < strlen(postfix); p++) {
    printf("%c", postfix[p]);
  }

}

void push(char item) {
  top = top + 1;
  stack[top] = item;
  int p;
}

int is_operator(char symbol) {
  if (symbol == '*' || symbol == '+' || symbol == '-' || symbol == '/' || symbol == '%' ) {
    return 1;
  } else {
    return 0;
  }
}
char pop() {
  char item;
  item = stack[top];
  top--;
  return (item);
}
int precedence(char symbol) {
  if (symbol == '*' || symbol == '/' || symbol == '%')
    return 1;
  if (symbol == '+' || symbol == '-')
    return 0;

}
