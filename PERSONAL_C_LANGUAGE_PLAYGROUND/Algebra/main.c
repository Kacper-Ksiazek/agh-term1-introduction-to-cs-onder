#include <stdio.h>
#include "matrix.h"

int main(){
    struct Matrix2D A = {
        .amountOfColumns=3,
        .amountOfRows=4,
        .data={
            {3,-2,1},
            {0,3,-2},
            {1,2,-4},
            {2,1,0}
        }
    };

    struct Matrix2D B = {
        .amountOfColumns=4,
        .amountOfRows=4,
        .data={
            {-2,1,2,3},
            {-1,2,-3,0},
            {1,-2,1,-3},
            {4,-3,2,-1}
        }
    };

    struct Matrix2D C = {
        .amountOfColumns=5,
        .amountOfRows=3,
        .data={
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
    struct Matrix2D transposedATImesB = multipleTwoMatrixcs(&transposedA,&B);
    struct Matrix2D result = transposeMatrix(&transposedATImesB);

    printMatrix(&result);

    printf("\n");

    return 0;
}

void printMatrix(struct Matrix2D *matrix){
    for(int rowIndex = 0; rowIndex<matrix->amountOfRows; rowIndex++){
        printf("| ");
        for(int columnIndex = 0; columnIndex<matrix->amountOfColumns; columnIndex++){
            if(columnIndex+1 == matrix->amountOfColumns){
                printf("%d", matrix->data[rowIndex][columnIndex]);
                continue;
            }
            printf("%d, ", matrix->data[rowIndex][columnIndex]);
        }
        printf(" |\n");
    }
}

struct Matrix2D transposeMatrix(struct Matrix2D *receivedMatrix){
    struct Matrix2D result = {
        .amountOfColumns = receivedMatrix->amountOfRows,
        .amountOfRows = receivedMatrix->amountOfColumns
    };

    for(int rowIndex = 0; rowIndex < result.amountOfRows ; rowIndex ++){
        for(int columnIndex = 0; columnIndex < result.amountOfColumns ; columnIndex ++){
            result.data[rowIndex][columnIndex] = receivedMatrix->data[columnIndex][rowIndex];
        }
    }
   
    return result;
}

int multiplicationIsPossible(struct Matrix2D *matrix1, struct Matrix2D *matrix2){
    if(matrix1->amountOfColumns == matrix2->amountOfRows) return 1;
    return 0;
}

struct Matrix2D multipleTwoMatrixcs(struct Matrix2D *matrix1, struct Matrix2D *matrix2) {
    if(multiplicationIsPossible(matrix1,matrix2) == 0){
        printf("Multiplication is not possible at all");
        struct Matrix2D t ={
            .amountOfColumns=0,
            .amountOfRows= 4
        };
        return t;
    }

    struct Matrix2D result={
        .amountOfColumns = matrix2->amountOfColumns,
        .amountOfRows = matrix1->amountOfRows,
    };

    for(int rowIndex = 0; rowIndex< result.amountOfRows; rowIndex++){
        for(int columnIndex = 0; columnIndex < result.amountOfColumns ; columnIndex++){
            int value = 0;
            for(int operationIndex = 0; operationIndex < matrix1->amountOfColumns ; operationIndex ++){
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