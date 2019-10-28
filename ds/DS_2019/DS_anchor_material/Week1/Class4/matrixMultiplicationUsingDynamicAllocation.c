#include <stdio.h>
#include <stdlib.h>

int** make2DArray (int rows, int col) {

	int **array;
	int i;

	array = (int **)malloc(rows * sizeof(int*));

	for (i = 0; i < col; i++) {

		*(array + i) = (int *)malloc(col * sizeof(int));
	}

	return array;

}

int main()
{
	int a1, a2, b1, b2, i, j, k, sum;
	
	printf("Enter Dimensions Of Matrix A\n");
	scanf("%d%d", &a1, &a2);
	printf("Dimensions Of A is %dx%d\n", a1, a2);
	
	printf("Enter Dimensions Of Matrix B\n");
	scanf("%d%d", &b1, &b2);
	printf("Dimensions Of B is %dx%d\n", b1, b2);
	
	if (a2 != b1)
		exit(0); 
	
	// int matA[a1][a2], matB[b1][b2], res[a1][b2];

	int **matA; 
	int **matB;
	int **res;

	matA = make2DArray(a1, a2);
	// matA = (int **) malloc(a1 * sizeof(int*));
	matB = (int **) malloc(b1 * sizeof(int*));
	res = (int **) malloc(a1 * sizeof(int*));

	// for (i = 0; i < a2; i++) {
	// 	*(matA + i) = malloc(a2 * sizeof(int));
	// }

	for (i = 0; i < b2; i++) {
		*(matB + i) = malloc(b2 * sizeof(int));
	}

	for (i = 0; i < b2; i++) {
		*(res + i) = malloc(b2 * sizeof(int));
	}


	
	printf("Enter Martix A\n");
	for(i=0; i<a1; i++)
	{
		for (j=0; j<a2; j++)
		{
			scanf("%d", (*(matA + i) + j));
		}
	}
	printf("Enter Matrix B\n");
	 for(i=0; i<b2; i++)
        {
                for (j=0; j<b1; j++)
                {
                        scanf("%d", (*(matB + i) + j));
                }
        }
	
	printf("Matrix A:\n\n");
	 for(i=0; i<a1; i++)
        {
                for (j=0; j<a2; j++)
                {
                        printf("%d\t", (*(*(matA + i) + j)) );
                }
		printf("\n");
        }
	printf("Matrix B:\n");
	for(i=0; i<b1; i++)
        {
                for (j=0; j<b2; j++)
                {
                        printf("%d\t", (*(*(matB + i) + j)) );
                }
                printf("\n");
        }
	for (i=0; i<a1; i++)
	{
		for (j=0; j<b2; j++)
		{	
			res[i][j] = 0;
			for(k=0; k<b1; k++)
			{
				// res[i][j] += ((matA[i][k]) * (matB[k][j]));
				*(*(res + i) + j) += *(*(matA + i) + k) * *(*(matB + k) + j);
			}
		}
	}
	printf("Resultant Matrix:\n");
        for(i=0; i<a1; i++)
        {
                for (j=0; j<b2; j++)
                {
                        printf("%d\t", *(*(res + i) + j));
                }
                printf("\n");
        }
    return 0;

}

















