#ifndef MATRIX
#define MATRIX

struct Matrix2D {
	int amountOfColumns;
	int amountOfRows;
	int data[10][10];
};

void printMatrix(struct Matrix2D* matrix);
struct Matrix2D transposeMatrix(struct Matrix2D* receivedMatrix);
int multiplicationIsPossible(struct Matrix2D* matrix1, struct Matrix2D* matrix2);
struct Matrix2D multipleTwoMatrixcs(struct Matrix2D* matrix1, struct Matrix2D* matrix2);

#endif