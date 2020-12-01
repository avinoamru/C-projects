#include <stdio.h>
#include <stdlib.h>
#include "mat.h"

void read_mat(MAT matrixToInit, double *valuesToInsert);

void print_mat(MAT matrix);

int main()
{

    MAT m1, m2, m3;
    double m1vals[MAX_NUM_OF_VALUES] = {2, 1, 1, 2, 1, 2, 2, 1, 3, 4, 4, 3, 4, 3, 3, 4};
    double m2vals[MAX_NUM_OF_VALUES] = {5, 4, 3, 1, 6, 4, 5, 2, 1, 4, 5, 3, 2, 5, 1, 2};
    read_mat(m1, m1vals);
    printf("\tmat1\n");
    print_mat(m1);

    read_mat(m2, m2vals);
    printf("\tmat2\n");
    print_mat(m2);

    trans_mat(m2, m3);
    printf("\tmat3\n");
    print_mat(m3);

    return 0;
}

void read_mat(MAT matrixToInit, double *valuesToInsert)
{
    int i, j;
    for (i = 0; i < MAT_SIZE; i++)
        for (j = 0; j < MAT_SIZE; j++)
        {
            matrixToInit[i][j] = valuesToInsert == NULL ? 0 : *valuesToInsert;
            valuesToInsert++;
        }
}

void print_mat(MAT matrix)
{
    int i, j;
    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            printf("%7.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}
