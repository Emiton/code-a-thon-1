#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strContains(string str1, string str2)
{
    int instancesFound = 0;

    if (strlen(str2) > strlen(str1))
    {
        return 0;
    }

    for (int i = 0, j = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;

            for ( ; j < strlen(str2); j++)
            {
                if (str1[i] == str2[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    j = strlen(str2) + 1;
                }
            }

            if (j == strlen(str2))
            {
               instancesFound += 1;
            }
            j = 0;
        }
    }
    return instancesFound;
}

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: stringContains string1 string2");
        return 1;
    }
    string s1 = argv[1];
    string s2 = argv[2];

    int strPossibilities = strContains(s1, s2);
    printf("Your result is: %i\n", strPossibilities);

    // switch(strPossibilities)
    // {
    //     case 0:
    //         printf("The string does not exist\n");
    //         break;
    //     case 1:
    //         printf("The string exists\n");
    //         break;
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //         printf("This string is full of the word\n");
    //         break;
    // }
}