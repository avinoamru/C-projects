/*
    Prototype declarations for matrix functions ;
*/

#ifndef MAT_H /* include guard */
#define MAT_H

#define MAT_SIZE 4           /* Size of each dimension of the matrix ; */
#define MAX_NUM_OF_VALUES 16 /* Maximum number of values a matrix can contain ; */

typedef double MAT[MAT_SIZE][MAT_SIZE];

/*
    add_mat performs an addition of 2 matrices and stores the result in a third matrix ;
    params: 
        MAT A - a matrix ;
        MAT B - the matrix you want to add to MAT A ;
        MAT C - the matrix that will store the result of MAT A + MAT B ;
*/
void add_mat(MAT A, MAT B, MAT C);

/*
    sub_mat performs a subtraction of 1 matrix by another,
    and stores the result in a third matrix ;
    params: 
        MAT A - the matrix to subtract from ;
        MAT B - the matrix to subtract by ;
        MAT C - the matrix that will store the result of MAT A - MAT B ;
*/
void sub_mat(MAT A, MAT B, MAT C);

/*
    mul_mat performs a multiplication of 2 matrices and stores the result in a third matrix;
    params: 
        MAT A - a matrix ;
        MAT B - the matrix you want to multiply by ;
        MAT C - the matrix that will store the result of MAT A * MAT B ;
*/
void mul_mat(MAT A, MAT B, MAT C);

/*
    mul_scalar performs a scalar multiplication of a matrix by a real number and stores the result in a third matrix ;
    params: 
        MAT A - a matrix ;
        double multiplier - the number to multiply MAT A by ;
        MAT C - the matrix that will store the result of MAT A * double multiplier ;
*/
void mul_scalar(MAT A, double multiplier, MAT C);

/*
    trans_mat performs a transpose of a matrix and stores the transposed matrix in another matrix ;
    params: 
        MAT A - the matrix to transpose ;
        MAT B - the matrix that will store the transposed matrix ;
*/
void trans_mat(MAT A, MAT B);

#endif
