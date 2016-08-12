/*
 * asciimath.c
 * by Zamyla Chan
 *
 * Calculates the addition of a char and an integer,
 * and displays both the resultant character and its
 * ASCII value.
 *
 * Usage: ./asciimath key [char]
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
        
        {
 printf("print the key next time \n"); 
        return 1;
        }
    // key is the second command line argument 

  
    int key = atoi(argv[1]); //преобразование строки в int 

    int letter = 'A';
    
    printf("\nCalculating '%c' + %d...\n", letter, key);
    
    int result = (letter + key);
        
    printf("The ASCII value of %c is %d.\n\n", result, result);
   
    return 0;
    

}