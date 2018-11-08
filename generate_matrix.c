// C program to generate random matrices
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
*Function generating the random matrix of size n * m
*/
int **generate_matrix(int rows, int cols){
     // allocate rows number of Rows.
    int **matrix = (int **)malloc(rows * sizeof(int *));

    // for each row allocate cols ints
    for (int r = 0; r < rows; r++) {
        matrix[r] = (int *)malloc(cols * sizeof(int));
    }

    //populate each element of matrix with random numbers between 0 - 9
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++){
          srand(time(0));
          int random_num = rand() % 10;
          matrix[i][j] = random_num;
        }

    return matrix;
}

void free_matrix(int **matrix, int rows)
{
    //free each row
    for (int r = 0; r < rows; r++) {
         free(matrix[r]);
    }

    // free memory of the pointers to the row.
    free(matrix);
 }

// For testing remove later
int main(int argc, const char* argv[]){
    int** arr = generate_matrix(3,3);

    printf("%d", arr[2][2]);

    free_matrix(arr, 3);

 }
