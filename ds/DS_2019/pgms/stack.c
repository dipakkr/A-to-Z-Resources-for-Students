#include<stdio.h>
#include<ctype.h>

typedef struct stack
{
 float a[50];
 int top; 
}STACK;

void init(STACK *t)
{
  t->top=-1;
}
int push(STACK *t,float e)
{
  if (t->top==49)
   return 0;
  t->top++;
  t->a[t->top]=e;
  return 1;
}

int pop(STACK *t,float *pe)
{
  if (t->top==-1)
    return 0;
  *pe=t->a[t->top];
   t->top--;
   return 1;
}
int isEmpty(STACK *t)
 {
  return (t->top==-1);
}
int isFull(STACK *t)
{
 return (t->top==49);
}
char stackTop(STACK *t)
{
  return (t->a[t->top]);
}
void disp(STACK *t)
{
  if(isEmpty(t))
    printf("empty");
  else
   {
     int i=t->top;
     while(i>=0){
      printf("%f",t->a[i]);
      i--;
      }
    }
}
main()
{
  STACK s; 
  char postfix[50];
  int i=0;float op2,op1,res;
  printf("enter the postfix string");
  scanf("%s",postfix);
  while(postfix[i]!='\0')
   {
     if(isdigit(postfix[i]))
       push(&s,postfix[i]-'0');
     else
      {
        pop(&s,&op2);
        pop(&s,&op1);
        printf("%f %f",op1,op2);
        switch(postfix[i])
        {
         case '+': res=op1+op2;
                  break;
         case '-': res=op1-op2;
                  break;
         case '*': res=op1*op2;
                  break;
         case '/': res=op1/op2;
                  break;
        }
     push(&s,res);
    }
     i++;
  }
 pop(&s,&res);
 printf("%f",res);
}











