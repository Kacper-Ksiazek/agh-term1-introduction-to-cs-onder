#include <stdio.h>
#include "matrix.h"

void AssignmentA();
void AssignmentB();
void AssignmentC();
void AssignmentD();


const struct Matrix2D A = {
		.amountOfColumns = 3,
		.amountOfRows = 4,
		.data = {
			{3,-2,1},
			{0,3,-2},
			{1,2,-4},
			{2,1,0}
		}
};

const struct Matrix2D B = {
	.amountOfColumns = 4,
	.amountOfRows = 4,
	.data = {
		{-2,1,2,3},
		{-1,2,-3,0},
		{1,-2,1,-3},
		{4,-3,2,-1}
	}
};

const struct Matrix2D C = {
	.amountOfColumns = 5,
	.amountOfRows = 3,
	.data = {
		{0,-1,2,-3,-1},
		{3,2,-1,2,-1},
		{2,-1,-4,0,1}
	}
};

int main() {
	AssignmentA();
	AssignmentB();
	AssignmentC();
	AssignmentD();

	return 0;
}


void AssignmentA() {
	printf("\na)\n");
	struct Matrix2D mult = multipleTwoMatrixcs(&A, &C);
	struct Matrix2D res = transposeMatrix(&mult);

	printMatrix(&res);
}

void AssignmentB() {
	printf("\nb)\n");
	struct Matrix2D transposedA = transposeMatrix(&A);
	struct Matrix2D transposedATImesB = multipleTwoMatrixcs(&transposedA, &B);
	struct Matrix2D result = transposeMatrix(&transposedATImesB);

	printMatrix(&result);
}

void AssignmentC() {
	printf("\nc)\n");
	struct Matrix2D transposedA = transposeMatrix(&A);
	struct Matrix2D result = multipleTwoMatrixcs(&B, &transposedA);

	printMatrix(&result);
	printf("\n");
}

void AssignmentD() {
	printf("\nd)\n");
	struct Matrix2D transposedB = transposeMatrix(&B);
	struct Matrix2D result = multipleTwoMatrixcs(&B, &transposedB);

	printMatrix(&result);
	printf("\n");
}