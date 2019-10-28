
  #include<stdio.h>

  #include <stdlib.h>
  
  void push(char,char*,int*);

  char pop(char*,int*);

  int isempty(int);
  
  int match(char *);
  
  
  void main()

  {

   int result;

   char s[100];

int a; char a;
   printf("Enter the expression...");
 
   scanf("%s",s);
   
   result=match(s);

   if(result)

      printf("\nMatching succeeded\n");

   else
      printf("\nMatching failed\n");

   }



   int match(char *s)

   {
 
    char stack[10],ch,in;

     int top,i;
     
     top=-1;

     i=0;

     while(s[i]!='\0')

     {

       ch=s[i];

        switch(ch)

        {

            case '(':push(ch,stack,&top);

                     break;

            
case '{':push(ch,stack,&top);

                     break;

            
            case '[':push(ch,stack,&top);

                      break;
            
            case ')':if(isempty(top)!=1)

                     {
                  
                     in =pop(stack,&top);
                      if(in=='(')

                          break;

                       else

                          return 0;

                     }
             
                       else
  
                    return 0;
  
           case '}':if(isempty(top)!=1)

                     {

                       in =pop(stack,&top);

                       if(in=='{')

                          break;
 
                       else
       
                          return 0;

                     }

                     else

                      return 0;


            case ']':if(isempty(top)!=1)

                     {
 
                      in =pop(stack,&top);

                       if(in=='[')

                          break;

                      else return 0;

                     }

                     else

                      return 0;

                   }//end switch
  
      i++;
 
   } //end while
return i;}

     
if(isempty(top))

        return 1;

     else

       return 0;

  }

 
  

    void push(char x,char *stk ,int *top)

    {
       (*top)++;

            stk[*top]=x;

        
     }

     

 char pop(char *stk,int *top)

     {
       char x;

       x=stk[*top];

       (*top)--;

       return x;
     }



     int isempty(int top)

     {

         if(top==-1)

           return 1;

         else

           return 0;

     }
























 




















 