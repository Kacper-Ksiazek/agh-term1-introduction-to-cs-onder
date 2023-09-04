#include <stdio.h>
#include <stdlib.h>

struct Matrix2D {
    int columns;
    int rows;
    int data[10][10];
};

struct Matrix2D generateMatrix2D(int amountOfRows, int amountOfColumns, int receivedArray[amountOfRows][amountOfColumns]){
    struct Matrix2D matrix;
    matrix.columns = amountOfColumns;
    matrix.rows = amountOfRows;

    for(int rowIndex = 0; rowIndex<amountOfRows; rowIndex++){
        for(int columnIndex = 0; columnIndex<amountOfColumns; columnIndex++){
            matrix.data[rowIndex][columnIndex] = receivedArray[rowIndex][columnIndex];
        }
    }

    return matrix;
}


int main (){
    int columns = 3;
    int rows = 2;
    int elements[2][3] = {
        {2,1,3},
        {-1,4,0}
    };

    struct Matrix2D matrix1 = generateMatrix2D(rows,columns, elements);

    return 0;
}