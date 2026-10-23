#include <stdio.h>
#include <stdlib.h>

int CheckNumber(int iValue)
{
    if (iValue > 0)
        return 1;
    else if (iValue < 0)
        return -1;
    else
        return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CheckNumber(iValue);

    if (iRet == 1)
        printf("Positive number\n");
    else if (iRet == -1)
        printf("Negative number\n");
    else
        printf("Zero\n");

    return EXIT_SUCCESS;
}