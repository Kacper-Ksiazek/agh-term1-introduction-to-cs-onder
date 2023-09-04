#include <stdio.h>
#include <stdlib.h>

struct Matrix2D {
    int amountOfColumns;
    int amountOfRows;
    int data[10][10];
};

const void printMatrix(struct Matrix2D *matrix){
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

int main(){
    struct Matrix2D matrix1 = {
        .amountOfColumns=4,
        .amountOfRows = 3,
        .data = { 
            {7,2,8,-1},
            {1,3,2,0},
            {-5,9,5,-7}
        }
    };
    struct Matrix2D transposedMatrix1 = transposeMatrix(&matrix1);
    printMatrix(&transposedMatrix1);

    return 0;
}