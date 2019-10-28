#include<stdio.h>

#include<stdlib.h>

#include"stack.h"


int evaluate(struct tnode *t)
{
    int x;


    switch(t->data)
		{
      case '+': return(evaluate(t->left)+evaluate(t->right));
				break;
		
      case '-': return(evaluate(t->left)-evaluate(t->right));break;
		
      case '*': return(evaluate(t->left)*evaluate(t->right));break;
		
      case '/': return(evaluate(t->left)/evaluate(t->right));break;

		      default:printf("\n %c= ",t->data);

		      scanf("%d",&x);
		
      return x;

    }

 
}



int isoper(char ch)
{
    switch(ch)
	{
      case '+':
      
		case '-':
      
		case '*':
      
		case '/':return 1;
      
		default: return 0;
    }

}

struct tnode* create_exptree(char *exp)
{


    struct tnode *temp;

    stack st;

    st.top=-1;

    int i=0;


    while(exp[i]!='\0')
	{

	      char ch=exp[i];
	
      temp=(struct tnode*)malloc(sizeof(struct tnode));
	
      temp->data=ch;
	
      temp->left=temp->right=NULL;
	

      if(isoper(ch))
		{//if operator
        
		temp->right=pop(&st);

        	temp->left=pop(&st);
	
        push(&st,temp);

       		}
      
	else{

       		push(&st,temp);//operand
      
}
    
i++;
    
}

  return(pop(&st));

}


 


void preorder(struct tnode *t)
{

    if(t!=NULL)
{

     printf("%c ",t->data);

     preorder(t->left);

     preorder(t->right);

    }

 }


  void postorder(struct tnode *t)
{

    if(t!=NULL)
{

     
     postorder(t->left);

     postorder(t->right);

     printf("%c ",t->data);

    }

 }


void inorder(struct tnode *t)
{

    if(t!=NULL)
{

     inorder(t->left);

     printf("%c ",t->data);

     inorder(t->right);

    }

 }


int main()
{

  struct tnode *root;

  char exp[100];

  root=NULL;

  
  printf("Enter the postfix form of the expression...");

  scanf("%s",exp);

  
  root=create_exptree(exp);

 printf("The infix expression = \n");

  inorder(root);

 printf("\nThe prefix expression = \n");

  preorder(root);

 printf("\nThe postfix expression = \n");

  postorder(root);

  printf("\nEvaluating the expression\n");

  int result = evaluate(root);

  printf("\nThe Result of Expression Evaluation = %d\n",result);

  
}

  
 



    
    



















 




  












             















  























