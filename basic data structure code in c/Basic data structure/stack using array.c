#include<stdio.h>

void main() {
  int size, choice;
  printf("insert the size of array : ");
  scanf("%d", & size);
  int top = -1;
  int arr[size];

  while (choice != -1) {
    printf("\n*************************************\n");
    printf("press 1 for push data in stack \n");
    printf("press 2 for pop data in stack \n");
    printf("press 3 for peek data in stack\n ");
    printf("press 4 to  display the whole stack \n ");
    printf("press -1 to exit \n");
    printf("Enter your choice : ");
    scanf("%d", & choice);

    if (choice == 1) {
      if (top == size - 1) {
        printf("\t\t\tWarning:The stack is full");
        break;
      } else {
        push(arr, size, top);
      }
      top = top + 1;
    }

    if (choice == 2) {
      if (top == -1) {
        printf("\t\t\tWarning:The stack is empty");
        break;
      } else {
        pop(arr, size, top);
      }
      top = top - 1;
    }
    if (choice == 3) {
      printf("the top most element of stack is : %d", arr[top]);
    }
    if (choice == 4) {
      display(arr, top);
    }
  }
}

int push(int arr[], int size, int top) {
  int item, i;
  printf("\n insert data item : ");
  scanf("%d", & item);
  top = top + 1;
  arr[top] = item;

  printf("\n\n");
  printf("after data insrted into stack : \n");
  for (i = 0; i < top; i++) {
    printf("%d     ", arr[i]);
  }

}

int pop(int arr[], int top, int size) {
  int i, temp;
  temp = arr[top];
  printf("\n\n after data deleted from stack : \n");
  for (i = 0; i < size; i++) {
    printf("%d    ", arr[i]);
  }
}

int display(int arr[], int top) {
  int i;
  for (i = 0; i <= top; i++) {
    printf("%d   ", arr[i]);

  }
}
