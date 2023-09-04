#include <stdio.h>
#include "matrix.h"

void printMatrix(struct Matrix2D* matrix) {
	for (int rowIndex = 0; rowIndex < matrix->amountOfRows; rowIndex++) {
		printf("| ");
		for (int columnIndex = 0; columnIndex < matrix->amountOfColumns; columnIndex++) {
			if (columnIndex + 1 == matrix->amountOfColumns) {
				printf("%d", matrix->data[rowIndex][columnIndex]);
				continue;
			}
			printf("%d, ", matrix->data[rowIndex][columnIndex]);
		}
		printf(" |\n");
	}
}

struct Matrix2D transposeMatrix(struct Matrix2D* receivedMatrix) {
	struct Matrix2D result = {
		.amountOfColumns = receivedMatrix->amountOfRows,
		.amountOfRows = receivedMatrix->amountOfColumns
	};

	for (int rowIndex = 0; rowIndex < result.amountOfRows; rowIndex++) {
		for (int columnIndex = 0; columnIndex < result.amountOfColumns; columnIndex++) {
			result.data[rowIndex][columnIndex] = receivedMatrix->data[columnIndex][rowIndex];
		}
	}

	return result;
}

int multiplicationIsPossible(struct Matrix2D* matrix1, struct Matrix2D* matrix2) {
	if (matrix1->amountOfColumns == matrix2->amountOfRows) return 1;
	return 0;
}

struct Matrix2D multipleTwoMatrixcs(struct Matrix2D* matrix1, struct Matrix2D* matrix2) {
	if (multiplicationIsPossible(matrix1, matrix2) == 0) {
		printf("Multiplication is not possible at all");
		struct Matrix2D t = {
			.amountOfColumns = 0,
			.amountOfRows = 0
		};
		return t;
	}

	struct Matrix2D result = {
		.amountOfColumns = matrix2->amountOfColumns,
		.amountOfRows = matrix1->amountOfRows,
	};

	for (int rowIndex = 0; rowIndex < result.amountOfRows; rowIndex++) {
		for (int columnIndex = 0; columnIndex < result.amountOfColumns; columnIndex++) {
			int value = 0;
			for (int operationIndex = 0; operationIndex < matrix1->amountOfColumns; operationIndex++) {
				int a = matrix1->data[rowIndex][operationIndex];
				int b = matrix2->data[operationIndex][columnIndex];
				// printf("(%d * %d) + ", a,b);
				value += a * b;
			}
			result.data[rowIndex][columnIndex] = value;
		}
	}

	return result;
}