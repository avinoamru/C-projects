#include "mat.h"

/*
    add_mat performs an addition of 2 matrices and stores the result in a third matrix ;
    params: 
        mat A - a matrix ;
        mat B - the matrix you want to add to mat A ;
        mat C - the matrix that will store the result of mat A + mat B ;
*/
void add_mat(mat A, mat B, mat C)
{
    int i, j; /* Iteration variables */
    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

/*
    sub_mat performs a subtraction of 1 matrix by another,
    and stores the result in a third matrix ;
    params: 
        mat A - the matrix to subtract from ;
        mat B - the matrix to subtract by ;
        mat C - the matrix that will store the result of mat A - mat B ;
*/
void sub_mat(mat A, mat B, mat C)
{
    int i, j; /* Iteration variables */
    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

/*
    mul_mat performs a multiplication of 2 matrices and stores the result in a third matrix;
    params: 
        mat A - a matrix ;
        mat B - the matrix you want to multiply by ;
        mat C - the matrix that will store the result of mat A * mat B ;
*/
void mul_mat(mat A, mat B, mat C)
{
    int i, j, k;            /* Iteration variables */
    double rowcolSum = 0.0; /* The sum of each mat A row multiplied by mat B column (col) ; */

    for (i = 0; i < MAT_SIZE; i++)
        for (j = 0; j < MAT_SIZE; j++)
        {
            for (k = 0; k < MAT_SIZE; k++)
                /* Storing the sum of every element \
                 in mat A[row i][column k] multiplied by every element \
                 of mat B[row k][column j] in variable rowcolSum ; */
                rowcolSum += (A[i][k] * B[k][j]);

            C[i][j] = rowcolSum; /* Setting mat C[row i][column j] to the sum calculated above */
            rowcolSum = 0.0;     /* resetting rowcolSum to 0.0 for the next rowcolSum calculation ; */
        }
}

/*
    mul_scalar performs a scalar multiplication of a matrix by a real number and stores the result in a third matrix ;
    params: 
        mat A - a matrix ;
        double multiplier - the number to multiply mat A by ;
        mat C - the matrix that will store the result of mat A * double multiplier ;
*/
void mul_scalar(mat A, double multiplier, mat C)
{
    int i, j; /* Iteration variables */

    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            C[i][j] = A[i][j] * multiplier;
        }
    }
}

/*
    trans_mat performs a transpose of a matrix and stores the transposed matrix in another matrix ;
    params: 
        mat A - the matrix to transpose ;
        mat B - the matrix that will store the transposed matrix ;
*/
void trans_mat(mat A, mat B)
{
    int i, j; /* Iteration variables */

    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            B[i][j] = A[j][i] ; 
        }
    }
}