#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct Stack {
    int *data;
    int top,size,capacity;
};

typedef struct Stack Stack;
    int *create(int capacity) {
    
      return(malloc(sizeof(int)*capacity));
    
    
}

void destroyStack(Stack *s) {
    if(s != NULL) free(s->data);
    free(s);
}

void doubleStack(Stack *s) {
    s->capacity = s->capacity*2;
    s->data = realloc(s->data,sizeof(int)*s->capacity);
    if(s->data != NULL) {
        printf("dataay doubling happened successfully!\n");
    } else {
        perror("realloc");
    }
}

int isFull(Stack s) {
    return s.size == s.capacity;
}

void push(Stack *s, int item) {
    if(isFull(*s))
        doubleStack(s);

    printf("%d pushed!\n",item);
    s->data[++(s->top)] = item;
    s->size++;
}

int isEmpty(Stack s) {
    return s.size == 0;
}

int pop(Stack *s) {
    if(isEmpty(*s)) {
        printf("Empty stack!\n");
        return(9999);
    }

    int item = s->data[(s->top)--];
    s->size--;
    return(item);
}
void display(Stack st) {
   int i;
   if (isEmpty(st))
      printf("\nStack Is Empty!");
   else {
      for (i = st.top; i >= 0; i--)
         printf("\n%d", st.data[i]);
   }
}

int main(void) {
    Stack st ;
int choice,capacity,item;
char ans;
printf("\n\tImplementation Of Stack");
   do {
      printf("\nMain Menu");
      printf("\n1.create\n 2.Push \n3.Pop \n4.Display \n5.exit");
      printf("\nEnter Your Choice");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
         printf("enter the capacity of the stack to be created");
         scanf("%d",&capacity);
         st.data=create(capacity);
         st.top = -1;
         st.capacity = capacity;
         st.size = 0;
         if(st.data==NULL)
         {printf("stack can not be created");
         exit(1);} 
         st.top=-1;
         break;   
      case 2:
         printf("\nEnter The item to be pushed");
         scanf("%d", &item);
         push(&st,item);
         break;
      case 3:
         if (isEmpty(st))
            printf("\nEmpty stack!Underflow !!");
         else {
            item = pop(&st);
            if(item!=9999)  
            printf("\nThe popped element is %d", item);
         }
         break;
      case 4:
         display(st);
         break;
      case 5:
          destroyStack(&st);
         exit(0);
      }
      printf("\nDo You want To Continue?(Y/N)");
      ans = getche();
   } while (ans == 'Y' || ans == 'y');

    return 0;
}