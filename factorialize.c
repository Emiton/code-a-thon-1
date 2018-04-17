#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

long long factorialize(int factor)
{
    long long multiple = 1;
    for (int i = 1; i <= factor; i++) {
        multiple *= i;
    }
    return multiple;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int myNumber = atoi(argv[1]);
    long long myFactor = factorialize(myNumber);
    printf("%lld\n", myFactor);
}