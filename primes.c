#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int sumPrimes(int value)
{
    int mySum = 0;
    for (int i = 2; i <= value; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                j = i + 1;
            }
        }

        if (i == j)
        {
            mySum += i;
        }
    }

    return mySum;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int myNumber = atoi(argv[1]);
    int mySum = sumPrimes(myNumber);
    printf("%i\n", mySum);
}