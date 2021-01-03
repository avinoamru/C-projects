#include <stdio.h>
#include <stdlib.h>
#include "matio.h"
#include <string.h>

int main()
{

  mat m1, m2, m3;
  char *inputLine;
  strarr parsedInput;

  init_mat(m1);
  init_mat(m2);
  init_mat(m3);

  print_mat(m3);

/*

 while ((inputLine = input()) != NULL)
    {

        if (strlen(inputLine) == 0)
        {
            printf("Empty Input\n");
            continue;
        }

        parsedInput = splitInput(inputLine);

      

    }

    if (inputLine == NULL)
    {
        fputs("EOF encountered\nProgram terminated\n", stderr);
        return EXIT_FAILURE;
    }
    */

  

  return 0;
}
