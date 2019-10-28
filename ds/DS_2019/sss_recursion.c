/*print numbers from n to1,factorial,fibonacci,addition of two numbers,mutiplication,sum of digits,count of digits,x raise to n,towers of hanoi, length of the string, find max in a set of ele,prime number.integer to binary,first uppercase in a string*/
#include<stdio.h>
void prt_numbers(int num)
{
 if(num==0) return;
 printf("%d",num);
 prt_numbers(num-1);
}
main()
{
 prt_numbers(10);
}
