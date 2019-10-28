#include <stdio.h>

int count;

void TOH(int n, int A, int B, int C) {


   if (n == 1) {

       count = count + 1;

       printf("Move Disc From %d To %d\n", A, C);
    }

   else {

        TOH(n - 1, A, C, B);
        TOH(1, A, B, C);
        TOH(n - 1, B, A, C);
   }    
}

int main() {

  int n;
  printf("Enter Number Of Discs\n");
  scanf("%d", &n);

  int A = 1, B = 2, C = 3;

  TOH(n, A, B, C);

  printf("Total Count = %d\n", count);
    
  return 0;

}
