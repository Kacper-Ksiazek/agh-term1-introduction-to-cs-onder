#include <stdio.h>
#include <stdlib.h>

struct Matrix2D {
    int amountOfColumns;
    int amountOfRows;
    int data[10][10];
};

struct Matrix2D generateMatrix2D(int amountOfRows, int amountOfColumns, int receivedArray[amountOfRows][amountOfColumns]){
    struct Matrix2D matrix;
    matrix.amountOfColumns = amountOfColumns;
    matrix.amountOfRows = amountOfRows;

    for(int rowIndex = 0; rowIndex<amountOfRows; rowIndex++){
        for(int columnIndex = 0; columnIndex<amountOfColumns; columnIndex++){
            matrix.data[rowIndex][columnIndex] = receivedArray[rowIndex][columnIndex];
        }
    }

    return matrix;
}


int main (){
    //
    // 🚀 FIRST method of defining an instance of a struct
    //
    int amountOfColumns = 3;
    int amountOfRows = 2;
    int elements[2][3] = {
        {2,1,3},
        {-1,4,0}
    };
    struct Matrix2D matrix1 = generateMatrix2D(amountOfRows,amountOfColumns, elements);
    //
    // 🚀 SECOND method of defining an instance of a struct
    //
    struct Matrix2D matrix2 = { 3, 2, { 
            {2,1,3},
            {-1,4,0}
        }
    };
    //
    // 🚀 THIRD method of defining an instance of a struct
    //
    struct Matrix2D matrix3 = {
        .amountOfColumns=3,
        .amountOfRows = 2,
        .data = { 
            {2,1,3},
            {-1,4,0}
        }
    };

    return 0;
}