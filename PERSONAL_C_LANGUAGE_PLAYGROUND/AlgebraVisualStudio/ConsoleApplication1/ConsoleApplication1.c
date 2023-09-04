#include <stdio.h>
#include "matrix.h"

int main() {
	struct Matrix2D A = {
		.amountOfColumns = 3,
		.amountOfRows = 4,
		.data = {
			{3,-2,1},
			{0,3,-2},
			{1,2,-4},
			{2,1,0}
		}
	};

	struct Matrix2D B = {
		.amountOfColumns = 4,
		.amountOfRows = 4,
		.data = {
			{-2,1,2,3},
			{-1,2,-3,0},
			{1,-2,1,-3},
			{4,-3,2,-1}
		}
	};

	struct Matrix2D C = {
		.amountOfColumns = 5,
		.amountOfRows = 3,
		.data = {
			{0,-1,2,-3,-1},
			{3,2,-1,2,-1},
			{2,-1,-4,0,1}
		}
	};

	// a)
	// printf("a) \n");
	// printf("Po mnozeniu:\n\n");
	// struct Matrix2D mult = multipleTwoMatrixcs(&A,&C);
	// printMatrix(&mult);

	// printf("Po transpozycji:\n\n");
	// struct Matrix2D res = transposeMatrix(&mult);

	// printMatrix(&res);

	// printf("\n");

	printf("b) \n");
	struct Matrix2D transposedA = transposeMatrix(&A);
	struct Matrix2D transposedATImesB = multipleTwoMatrixcs(&transposedA, &B);
	struct Matrix2D result = transposeMatrix(&transposedATImesB);

	printMatrix(&result);

	printf("\n");

	return 0;
}
