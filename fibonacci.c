#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int sumFibs(int fib)
{
    int n1 = 1;
    int n2 = 0;
    int totalSum = 0;

    if (fib == 1)
    {
        return 1;
    }

    while (n1 <= fib)
    {
        if (n1 % 2 != 0)
        {
            totalSum += n1;
        }

        n1 = n1 + n2;
        n2 = n1 - n2;
    }

    return totalSum;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int myNumber = atoi(argv[1]);
    int myFib = sumFibs(myNumber);
    printf("%i\n", myFib);
}