#include <stdio.h>
#include <stdlib.h>
void CheckEvenOdd(int iValue)
{
    if (iValue % 2== 0)
        return 1;
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
        printf("Even number\n");
    else
        printf("Odd number\n");
return EXIT_SUCCESS;
}

