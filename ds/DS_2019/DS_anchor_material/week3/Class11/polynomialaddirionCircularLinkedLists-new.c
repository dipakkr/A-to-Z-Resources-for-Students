#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

struct poly {

	int coef;
	int expo;
	struct poly *link;
};

typedef struct poly polyNode;

void attach(int coefficient, int exponent, polyNode *start) {

	polyNode *temp;
	polyNode *dstart;

	temp = (polyNode*)calloc(sizeof(polyNode), 1);

	temp -> coef = coefficient;
	temp -> expo = exponent;

	dstart = start -> link;

	while(dstart -> link != start) {
		
		dstart = dstart -> link;
	}

	dstart -> link = temp;
	temp -> link = start;
}


void readpoly(polyNode *start) {

	int ch = 1, c, e;
	
	while (ch == 1) {
	
		printf("Enter The Coefficient And Exponent\n");
		scanf("%d%d", &c, &e);

		attach(c, e, start);

		printf("Enter 1 To Continue And 0 To Exit\n");
		
		scanf("%d", &ch);
	}
}


int compare(int a,int b) {

	if (a > b)
		return 1;

	else if (a < b)
		return -1;

	else
		return 0;
}


void addpoly(polyNode *firstPoly, polyNode *secPoly, polyNode *resPoly) {

	int x;

	polyNode *dfirstPoly = firstPoly -> link;
	polyNode *dsecPoly = secPoly -> link;

	while(dfirstPoly != firstPoly && dsecPoly != secPoly) {
	
		switch(compare(dfirstPoly -> expo, dsecPoly -> expo)) {
		
			case 1: attach(dfirstPoly -> coef, dfirstPoly -> expo, resPoly);
					dfirstPoly = dfirstPoly -> link;
					break;

			case 0: x = dfirstPoly -> coef + dsecPoly -> coef;
					if(x) {

						attach(x, dfirstPoly -> expo, resPoly);

					}
					dfirstPoly = dfirstPoly -> link;
					dsecPoly = dsecPoly -> link;
					break;
			
			case -1:attach(dsecPoly -> coef, dsecPoly -> expo, resPoly);
					dsecPoly = dsecPoly -> link;
					break;
		}
	}

	for(; dfirstPoly != firstPoly; dfirstPoly = dfirstPoly -> link) {
		
		attach(dfirstPoly -> coef, dfirstPoly -> expo, resPoly);

	}

	for(; dsecPoly != secPoly; dsecPoly = dsecPoly -> link) {

		attach(dsecPoly -> coef, dsecPoly -> expo, resPoly);

	}
}


void display(polyNode *start) {

	bool set=false;
	polyNode *dstart;
	dstart = start -> link;
	
	while(dstart != start) {
	
		if(dstart -> coef > 0) {
			if(set==true) {
				printf("+ ");
			}

			printf("%dx^%d  ", dstart -> coef, dstart -> expo);
			if(set==false) set=true;
		}

		else {

			printf("%dx^%d", dstart -> coef, dstart -> expo);
		}
		
		dstart = dstart -> link;
	}

	printf("\n");
}


void eval(polyNode *start) {

	polyNode *dstart;
	int x;
	int ans = 0;

	printf("Enter The Value Of X\n");
	scanf("%d", &x);
	
	dstart = start -> link;

	while(dstart != start) {
	
		ans = ans + dstart -> coef * pow(x, dstart -> expo);
		dstart = dstart -> link;

	}

	printf("The Value Of The Polynomial With The Given Value Of X Is %d\n", ans);
}


int main() {

	polyNode *firstPoly;
	polyNode *secPoly;
	polyNode *resPoly;
	polyNode *temp;

	int ch;

	firstPoly = (polyNode*)calloc(sizeof(polyNode), 1);
	firstPoly -> link = firstPoly;

	secPoly = (polyNode*)calloc(sizeof(polyNode), 1);
	secPoly -> link = secPoly;

	resPoly = (polyNode*)calloc(sizeof(polyNode), 1);
	resPoly -> link = resPoly;

	printf("Enter Choice\n1. Addition\n2. Evaluation\n");
	scanf("%d", &ch);
	
	switch(ch) {
	
		case 1: printf("Enter First Polynomial\n");
				readpoly(firstPoly);

				printf("Enter Second Polynomial\n");
				readpoly(secPoly);

				addpoly(firstPoly, secPoly, resPoly);
				display(resPoly);

				break;


		case 2: printf("Enter Polynomial\n");
				readpoly(firstPoly);
				eval(firstPoly);
				break;


		default: exit(0);
	}

	return 0;
}