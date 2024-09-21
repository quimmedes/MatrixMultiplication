#include <stdlib.h>
#include <stdio.h>

int main()
{
	const int r1 = 3; // number of rows in the first matrix
	const int c1 = 3; // number of columns in the first matrix
	const int r2 = 3; // number of rows in the second matrix
	const int c2 = 3; // number of columns in the second matrix

	double** m1 = malloc(sizeof(double) *r1);
	double** m2 = malloc(sizeof(double) * r2);
	double** r = malloc(sizeof(double) * r1);

	//Allocating memory for the matrices

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



}
