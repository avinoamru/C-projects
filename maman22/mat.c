#include "mat.h"

/*
    add_mat performs an addition of 2 matrices and stores the result in a third matrix ;
    params: 
        MAT A - a matrix ;
        MAT B - the matrix you want to add to MAT A ;
        MAT C - the matrix that will store the result of MAT A + MAT B ;
*/
void add_mat(MAT A, MAT B, MAT C)
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
        MAT A - the matrix to subtract from ;
        MAT B - the matrix to subtract by ;
        MAT C - the matrix that will store the result of MAT A - MAT B ;
*/
void sub_mat(MAT A, MAT B, MAT C)
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
        MAT A - a matrix ;
        MAT B - the matrix you want to multiply by ;
        MAT C - the matrix that will store the result of MAT A * MAT B ;
*/
void mul_mat(MAT A, MAT B, MAT C)
{
    int i, j, k;            /* Iteration variables */
    double rowcolSum = 0.0; /* The sum of each MAT A row multiplied by MAT B column (col) ; */

    for (i = 0; i < MAT_SIZE; i++)
        for (j = 0; j < MAT_SIZE; j++)
        {
            for (k = 0; k < MAT_SIZE; k++)
                /* Storing the sum of every element \
                 in MAT A[row i][column k] multiplied by every element \
                 of MAT B[row k][column j] in variable rowcolSum ; */
                rowcolSum += (A[i][k] * B[k][j]);

            C[i][j] = rowcolSum; /* Setting MAT C[row i][column j] to the sum calculated above */
            rowcolSum = 0.0;     /* resetting rowcolSum to 0.0 for the next rowcolSum calculation ; */
        }
}

/*
    mul_scalar performs a scalar multiplication of a matrix by a real number and stores the result in a third matrix ;
    params: 
        MAT A - a matrix ;
        double multiplier - the number to multiply MAT A by ;
        MAT C - the matrix that will store the result of MAT A * double multiplier ;
*/
void mul_scalar(MAT A, double multiplier, MAT C)
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
        MAT A - the matrix to transpose ;
        MAT B - the matrix that will store the transposed matrix ;
*/
void trans_mat(MAT A, MAT B)
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