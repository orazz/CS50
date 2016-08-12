#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int i = 0, j = 0, add = 0;
    
    if (argc < 2 || argc > 2)
    {
        printf("print the key next time \n"); 
        return 1;
    }
    
    string key = argv[1];
    
    for (i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("please give me string key\n");
            return 1;
        }
    }
    
    string text = GetString();
    int len = strlen(text);
    int keylen = strlen(key);
    char cipher[len];
    
    for (i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(key[j%keylen]))
                add = (int)key[j%keylen] - 'A';         // determining value if key has uppercase character
            if (islower(key[j%keylen]))
                add = (int)key[j%keylen] - 'a';         // determining value if key has lowercase character
            j++;
                
            if(isupper(text[i]))
                cipher[i] = (int)'A' + ((int)text[i] - (int)'A' + add)%26;
            else
                cipher[i] = (int)'a' + ((int)text[i] - (int)'a' + add)%26;
            
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