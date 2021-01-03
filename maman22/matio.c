#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "matio.h"

void init_mat(mat MAT)
{
    int i, j;
    double z = -123456789.12345;

    for (i = 0; i < MAT_SIZE; i++)
        for (j = 0; j < MAT_SIZE; j++)
        {
            MAT[i][j] = (double)z;
            z = z / 2;
        }
}

void read_mat(mat MAT, double values[])
{
    int i = 0;
    while (values++ && i < 20)
    {
        printf("%.2f ", values[i]);
    }
}

void print_mat(mat MAT)
{
    int i, j;
    for (i = 0; i < MAT_SIZE; i++)
    {
        for (j = 0; j < MAT_SIZE; j++)
        {
            printf("%*.2f \t",
                   (MIN_NUM_LEN < (int)log10(MAT[i][j])) ?\
                    (int)log10(MAT[i][j]) :\
                     MIN_NUM_LEN, MAT[i][j]);
        }
        printf("\n");
    }
}
/*
void checkCommand(strarr *parsedInput)
{
    command commands[8] = {
        {"print_mat",  &(print_mat) },
        {"read_mat", read_mat},
        {"add_mat", add_mat},
        {"sub_mat", sub_mat},
        {"mul_mat", mul_mat},
        {"mul_scalar", mul_scalar},
        {"trans_mat", trans_mat},
        {"stop", stop}};

    int i;
    for (i = 0; i < 8; i++)
    {
        if (strcmp(strip(parsedInput->strings[0]), commands[i].name) != 0)
        {
            printf("found comman %s\n", commands[i].name);
            break;
        }
    }
} */

strarr splitInput(char *str)
{
    strarr newArray = {NULL, 0};
    const char separator[2] = ",";
    char *token;

    int i, w = 0;

    if (str == NULL)
        return newArray;

    newArray.strings = (char **)malloc(w);
    token = strtok(str, separator);

    while (token != NULL)
    {
        i = 0;
        while (token[i] == ' ')
        {
            token[i++] = '\b';
        }
        newArray.strings[w] = malloc(strlen(token));
        strcpy(newArray.strings[w++], token);
        newArray.strings = realloc(newArray.strings, w);
        token = strtok(NULL, separator);
    }

    newArray.size = w;

    return newArray;
}

char *input()
{
    char *str = malloc(1024);
    char *strippedStr;
    int len;
    if (fgets(str, 1024, stdin) == NULL)
        return NULL;

    strippedStr = strip(str);
    printf("stripped : %s\n", strippedStr);
    len = strlen(strippedStr);
    str = (char *)realloc(str, len);
    str[len - 1] = '\0';

    return str;
}

void stop()
{
    fputs("Program stopped.\n", stdout);
    exit(0);
}

char *strip(char *str)
{
    int i, len, j;
    if (str == NULL)
        return NULL;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        while (isspace(str[i]))
            while (j = i, isspace(str[j]))
            {
                str[j] = '\b';
            }
        len--;
    }
    printf("len %d\n", len);
    str = realloc(str, len);

    return str;
}
