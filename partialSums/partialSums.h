/**
 *  Generate a dynamically allocated array of integers using calloc. ;
 * 
 *  If for some reason calloc fails to assign the required memory, the program will terminate. ;
 * 
 *  Params:
 *  size - Represents the number of elements the array should be able to contain. ;
 * 
 *  Returns a pointer/array that can contain the number of integers specified in parameter size. ;
 */ 
int *genArray(int size);

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
void printArray(char *arrayName, int *array, int size);

/** Create a dynamically allocated array using calloc that contains the \
 *  partial sums of a given array's elements. ;
 * 
 *  If for some reason calloc fails to assign the required memory, the program will terminate. ;
 *  
 * Params:
 * array - The original array to calculate the partial sums of. ;
 * 
 * size - The size of the given array. ;
 * 
 * Returns the array of the partial sums of the array given in \
 * the 1st parameter (array). ;
 */
int *partialSums(int *array, int size);
