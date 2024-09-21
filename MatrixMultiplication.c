#include <stdlib.h>
#include <stdio.h>

int main()
{
	int r1 = 3; // number of rows in the first matrix
	int c1 = 3; // number of columns in the first matrix
	int r2 = 3; // number of rows in the second matrix
	int c2 = 3; // number of columns in the second matrix

	double** m1 = NULL;
	double** m2 = NULL;
	double** r = NULL;

	printf("Matrix Multiplication\n");
	printf("For each value, press enter\n");

	printf("Define how many rows the first matrix has: \n");
	scanf_s("%d", &r1);
	printf("Define how many columns the first matrix has: \n");
	scanf_s("%d", &c1);
	printf("Define how many rows the second matrix has: \n");
	scanf_s("%d", &r2);
	printf("Define how many columns the second matrix has: \n");
	scanf_s("%d", &c2);

	
	//Allocating memory for the matrices

	m1 = malloc(sizeof(double) * r1);
	m2 = malloc(sizeof(double) * r2);
	r = malloc(sizeof(double) * r1);

	for (int i = 0;i < r1;i++) {
		m1[i] = malloc(sizeof(double)*c1);

		for (int j = 0;j < c1;j++)
			m1[i][j] = 0;
	}


	for (int i = 0;i < r2;i++) {
		m2[i] = malloc(sizeof(double)*c2);
		for (int j = 0;j < c2;j++)
			m2[i][j] = 0;
	}


	for (int i = 0;i < r1;i++) {
		r[i] = malloc(sizeof(double)*c2);
		for (int j = 0;j < c2;j++)
			r[i][j] = 0;
	}

	//Getting the matrices from the user

	printf("Enter the first matrix: \n");

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
		 
			scanf_s("%lf", &m1[i][j]);
		
		}
	}
	


	printf("Enter the second matrix: \n");
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			scanf_s("%lf", &m2[i][j]);

		}
	}



	printf("The result is: \n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {

			for (int k = 0; k < c1;k++) {
				r[i][j] += m1[i][k] * m2[k][j];
			}

		}
		

	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			printf("%lf ", r[i][j]);

		}
		printf("\n");


	}

	//Freeing the memory
	for (int i = 0; i < r1; i++) {
		free(m1[i]);
	}
	free(m1);

	for (int i = 0; i < r2; i++) {
		free(m2[i]);
	}
	free(m2);

	for (int i = 0; i < r1; i++) {
		free(r[i]);
	}

	free(r);



}
