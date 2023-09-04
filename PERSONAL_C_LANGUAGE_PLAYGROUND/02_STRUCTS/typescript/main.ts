interface Matrix2D {
    columns: number;
    rows: number;
    data: number[][];
}

const matrix1: Matrix2D = {
    columns: 3,
    rows: 2,
    data: [
        [2, 1, 3],
        [-1, 4, 0],
    ],
};

console.log(JSON.stringify(matrix1));

export {};
