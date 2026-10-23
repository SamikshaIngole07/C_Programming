#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by both 3 and 5");
    }
    else if (iValue % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Divisible by neither 3 nor 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}