#include <iostream>
using namespace std;

const int COL_MAX = 4;

void sortRowWise2D(int Matrix[][COL_MAX], int Row, int Col){
    for (int row = 0; row < Row; row++){
        int count = 0;
        while (count < Col){
            for (int col = 1; col < Col; col++){

                if (Matrix[row][col - 1] > Matrix[row][col]){
                    swap(Matrix[row][col - 1], Matrix[row][col]);
                    count = 0;
                } else{
                    count++;
                }

            }
        }
    }
}
int main(){
    int matrix[][COL_MAX] ={{9, 8, 7, 1},
                            {7, 3, 0, 2},
                            {9, 5, 3, 2},
                            {6, 3, 1, 2}};

    int row = 4;
    int col = COL_MAX;

    sortRowWise2D(matrix, row, col);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
