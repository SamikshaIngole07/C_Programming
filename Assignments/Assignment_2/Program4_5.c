#include <stdio.h>
#include <stdlib.h>
void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Given number is divisible by 5");
    }
    else
    {
        printf("Given number is not divisible by 5");
    }
}
int main()
{
int iValue = 0;
printf("Enter a number: ");
scanf("%d", &iValue);
CheckDivisibility(iValue);
return EXIT_SUCCESS;
}