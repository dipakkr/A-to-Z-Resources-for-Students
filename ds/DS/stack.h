
typedef struct stack{
    struct tnode *s[50];
    int top;
}stack;

void push(stack *st, struct tnode* temp){
    st->top++;
    st->s[st->top]=temp;
}
  
struct tnode *pop(stack *st){
    struct tnode *temp;
     temp=st->s[st->top];
     st->top--;
    return temp;
  }