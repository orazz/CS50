#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2)
    {
        printf("Improrer use of Command line arguments\n");
        return 1;
    }
    int i = 0;
    int key = atoi(argv[1]);
    string text = GetString();
    int len = strlen(text);
    char cipher[len];

    for (i = 0; i<len; i++)
    {
        if (isalpha(text[i]))
        {
            if(isupper(text[i]))
                cipher[i] = (int)'A' + ((int)text[i] - (int)'A' + key)%26;
            else
                cipher[i] = (int)'a' + ((int)text[i] - (int)'a' + key)%26;
        }else
            cipher[i] = text[i];
    }
    for (i = 0; i<len; i++)
    {
        printf("%c", cipher[i]);
    }
    printf("\n");
    return 0;
}
