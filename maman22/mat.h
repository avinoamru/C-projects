/*
    Prototype declarations for matrix functions ;
*/

#ifndef MAT_H /* include guard */
#define MAT_H

#define MAT_SIZE 4           /* Size of each dimension of the matrix ; */
#define MAX_NUM_OF_VALUES 16 /* Maximum number of values a matrix can contain ; */

typedef double mat[MAT_SIZE][MAT_SIZE];

/*
    add_mat performs an addition of 2 matrices and stores the result in a third matrix ;
    params: 
        mat A - a matrix ;
        mat B - the matrix you want to add to mat A ;
        mat C - the matrix that will store the result of mat A + mat B ;
*/
void add_mat(mat A, mat B, mat C);

/*
    sub_mat performs a subtraction of 1 matrix by another,
    and stores the result in a third matrix ;
    params: 
        mat A - the matrix to subtract from ;
        mat B - the matrix to subtract by ;
        mat C - the matrix that will store the result of mat A - mat B ;
*/
void sub_mat(mat A, mat B, mat C);

/*
    mul_mat performs a multiplication of 2 matrices and stores the result in a third matrix;
    params: 
        mat A - a matrix ;
        mat B - the matrix you want to multiply by ;
        mat C - the matrix that will store the result of mat A * mat B ;
*/
void mul_mat(mat A, mat B, mat C);

/*
    mul_scalar performs a scalar multiplication of a matrix by a real number and stores the result in a third matrix ;
    params: 
        mat A - a matrix ;
        double multiplier - the number to multiply mat A by ;
        mat C - the matrix that will store the result of mat A * double multiplier ;
*/
void mul_scalar(mat A, double multiplier, mat C);

/*
    trans_mat performs a transpose of a matrix and stores the transposed matrix in another matrix ;
    params: 
        mat A - the matrix to transpose ;
        mat B - the matrix that will store the transposed matrix ;
*/
void trans_mat(mat A, mat B);

#endif
