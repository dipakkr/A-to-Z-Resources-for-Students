#include<stdio.h>
main()
{
  FILE *fp;
  char a[]="iam fine. testing";
char b[40];
  fp=fopen("test.txt","w");
  fwrite(a,1,20,fp);
  fclose(fp);
  fp=fopen("test.txt","r");
  fgets(b,20,fp);
  puts(b);
  fclose(fp);
}
 


