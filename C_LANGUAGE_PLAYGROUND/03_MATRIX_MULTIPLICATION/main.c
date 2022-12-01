#include <stdio.h>
#include <stdlib.h>

struct Matrix2D {
    int amountOfColumns;
    int amountOfRows;
    int data[10][10];
};

const int multiplicationIsPossible(struct Matrix2D matrix1, struct Matrix2D matrix2){
    if(matrix1.amountOfColumns == matrix2.amountOfRows) return 1;
    return 0;
}

const void printMatrix(struct Matrix2D matrix){
    for(int rowIndex = 0; rowIndex<matrix.amountOfRows; rowIndex++){
        printf("| ");
        for(int columnIndex = 0; columnIndex<matrix.amountOfColumns; columnIndex++){
            if(columnIndex+1 == matrix.amountOfColumns){
                printf("%d", matrix.data[rowIndex][columnIndex]);
                continue;
            }
            printf("%d, ", matrix.data[rowIndex][columnIndex]);
        }
        printf(" |\n");
    }
}

const struct Matrix2D multipleTwoMatrixcs(struct Matrix2D matrix1, struct Matrix2D matrix2) {
    if(multiplicationIsPossible(matrix1,matrix2) == 0){
        printf("Multiplication is not possible at all");
        struct Matrix2D t ={
            .amountOfColumns=0,
            .amountOfRows= 4
        };
        return t;
    }

    struct Matrix2D result={
        .amountOfColumns = matrix2.amountOfColumns,
        .amountOfRows = matrix1.amountOfRows,
    };

    for(int rowIndex = 0; rowIndex< result.amountOfRows; rowIndex++){
        for(int columnIndex = 0; columnIndex < result.amountOfColumns ; columnIndex++){
            int value = 0;
            for(int operationIndex = 0; operationIndex < matrix1.amountOfColumns ; operationIndex ++){
                int a = matrix1.data[rowIndex][operationIndex];
                int b = matrix2.data[operationIndex][columnIndex];
                // printf("(%d * %d) + ", a,b);
                value += a * b;
            }
            printf("\n");
            result.data[rowIndex][columnIndex] = value;
        }
    }

    return result;
}



int main (){
    /*
    struct Matrix2D matrix1 = {
        .amountOfColumns=3,
        .amountOfRows = 2,
        .data = { 
            {-2,-3,1},
            {-1,4,0}
        }
    };

    struct Matrix2D matrix2 = {
        .amountOfColumns=3,
        .amountOfRows = 3,
        .data = { 
            {-2,-1,2},
            {3,0,1},
            {2,2,-1}
        }
    };
    */
    struct Matrix2D matrix1 = {
        .amountOfColumns=3,
        .amountOfRows = 2,
        .data = { 
            {1,2,-1},
            {-1,1,2}
        }
    };

    struct Matrix2D matrix2 = {
        .amountOfColumns=2,
        .amountOfRows = 3,
        .data = { 
            {1,2},
            {2,1},
            {1,1},
        }
    };

    printMatrix(matrix1);
    printf("\n      *\n\n");
    printMatrix(matrix2);
    printf("\n      =\n\n");

    struct Matrix2D multiplicationResult = multipleTwoMatrixcs(matrix1, matrix2);

    printMatrix(multiplicationResult);

    // printf("Essa %d", matrix1.col);
    return 0;
}