/**
 * This program gets a sequence of integers where the first one represents a \
 * size of an array and the rest represents the elements of that array. ;
 * After the array is set, a function called partialSums is called on the array. ;
 * Partial sums returns an array containing the sums of the given array's elements. ;
 * 
 * Author: Avinoam Ruach 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "partialSums.h"

int main()
{
    int size,
        i, /* Iterator */
        *originalArray, 
        *partialSumsArray;
    printf("Please enter a sequence of integer numbers.\n");
    printf("The first number represents the size of an array, \n");
    printf("and the rest of the numbers are representing the array elements:\n");

    scanf("%d", &size);

    originalArray = genArray(size);

    for (i = 0; i < size; i++)
        scanf("%d", &originalArray[i]);

    printArray("Original array:", originalArray, size);
    partialSumsArray = partialSums(originalArray, size);
    free(originalArray);
    printArray("Partial sums array:", partialSumsArray, size);
    free(partialSumsArray);

    return EXIT_SUCCESS;
}

/**
 *  Generate a dynamically allocated array of integers using calloc. ;
 * 
 *  If for some reason calloc fails to assign the required memory to the array, \
 *  the program will terminate. ;
 * 
 *  Params:
 *  size - Represents the number of elements the array should be able to contain. ;
 * 
 *  Returns a pointer/array that can contain the number of integers specified in parameter size. ;
 */
int *genArray(int size)
{
    int *array = (int *)calloc(size, sizeof(int));
    if (array == NULL)
    {
        printf("Function genArray failed to allocate memory.\n");
        printf("Program terminated.\n");
        exit(EXIT_FAILURE);
    }
    return array;
}

/**
 *  Prints an array of integers in a readable format. ;
 * 
 * Params:
 * arrayName - A character string to specify the array name/label that should be printed. ;
 * 
 * array - The array of integers to be printed. ;
 * 
 * size - The size of the array, used for looping through the array given in the 2nd parameter (array). ;
*/
void printArray(char *arrayName, int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (i == 0) /* Conditions to structure the format the array should be printed. */
            if (size == 1)
                printf("\n%s is: [%d]\n", arrayName, array[i]);
            else
                printf("\n%s is: [%d, ", arrayName, array[i]);
        else if (i == (size - 1))
            printf("%d]\n", array[i]);
        else
            printf("%d, ", array[i]);
    }
}

/** Create a dynamically allocated array using genArray that contains the \
 *  partial sums of a given array's elements. ;
 * 
 *  If for some reason genArray fails to assign the required memory, the program will terminate. ;
 *  
 * Params:
 * array - The original array to calculate the partial sums of. ;
 * 
 * size - The size of the given array. ;
 * 
 * Returns the array of the partial sums of the array given in \
 * the 1st parameter (array). ;
 */
int *partialSums(int *array, int size)
{
    int i;   /* Iterator */
    int sum; /* The sum of the elements */
    int *newArray = genArray(size);

    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
        newArray[i] = sum;
    }

    return newArray;
}
