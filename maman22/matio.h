/**
 *  Prototype declarations for input/output functions for matrices. ;
 */
#ifndef MATIO_H
#define MATIO_H

#include "mat.h"

#define MIN_NUM_LEN 7 /* Represents the minimum string size of the printed numbers for print_mat */
#define LINE_LEN 2048 /* Max length of input line */
#define NUM_OF_MATS 6 /* Number of matrices in this program */

typedef struct stringArr
{
    char **strings;
    int size;
} strarr;

typedef struct command
{
    char *name;
    void (*functionPtr)(void* );

} command;

char *
input();

strarr splitInput(char *str);

void checkCommand(strarr *parsedInput);

void checkArguments(char *command, strarr *parsedInput);

void init_mat(mat MAT);

void read_mat(mat MAT, double values[]);

void print_mat(mat MAT);

void stop();


char *strip (char *str);

#endif