#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("First number is greater\n");
    }
    else if (iFirst < iSecond)
    {
        printf("Second number is greater %d\n",iFirst);
    }
    else
    {
        printf("Both numbers are equal %d\n",iSecond);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}