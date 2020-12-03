/**
 * This program gets an integer sequence where the 1st one represents a 
 * size of an array and the rest represents the elements of said array.
 * After the array is set, a function called partialSums is called on the array.
 * Partial sums returns an array containing the sums of the given array
 * elements.
 * 
 * More specific documentation about the functions can be seen in file partialSums.h 
 * 
 * Author: Avinoam Ruach 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "partialSums.h"

int main()
{
    int size, i, *originalArray, *partialSumsArray;
    printf("Please enter a sequence of integer numbers.\n");
    printf("The first number represents the size of an array, \n");
    printf("and the rest of the numbers are representing the array elements:\n");
    scanf("%d", &size);

    originalArray = genArray(size);
    if (originalArray == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for (i = 0; i < size; i++)
        scanf("%d", &originalArray[i]);

    printArray("Original array:", originalArray, size);
    partialSumsArray = partialSums(originalArray, size);
    free(originalArray);
    printArray("Partial sums array:", partialSumsArray, size);
    free(partialSumsArray);

    return EXIT_SUCCESS;
}

int *genArray(int size)
{
    return (int *)calloc(size, sizeof(int));
}

void printArray(char *arrayName, int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {

        if (i == 0)
            if (size == 1)
            {
                printf("\n%s is: [%d]\n", arrayName, array[i]);
            }
            else
                printf("\n%s is: [%d, ", arrayName, array[i]);

        else if (!(i % 25)) /* Add new line every 25 elements for readability. */
            if (size == 25)
                printf("%d]\n", array[i]);
            else
                printf("\n%d, ", array[i]);
        else if (i == (size - 1))
            printf("%d]\n", array[i]);
        else
            printf("%d, ", array[i]);
    }
    printf("\n"); /* To add space for readability in output text files incase there are any. */
}

int *partialSums(int *array, int size)
{
    int *newArray = genArray(size);
    int i;
    int sum; /* The sum of the elements */

    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
        newArray[i] = sum;
    }

    return newArray;
}
