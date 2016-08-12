#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    string name = GetString();

    if (name != NULL)
    {
        int i = 0;
        int n = 0;
        //char initials[strlen(name)];
        //int j = 0;

        for (n = strlen(name); i < n; i++)
        {
            if (name[i] != ' ')
            {
                if (i == 0)
                {
                    //initials[j++] = toupper(name[i]);
                    printf("%c", toupper(name[i]));

                }
            }else{
                //initials[j++] = toupper(name[i+1]);
                printf("%c", toupper(name[i+1]));
            }
        }
        //for(i=0; i<j; i++)                          // prints initials
        //   printf("%c",initials[i]);
        printf("\n");
    }
}
