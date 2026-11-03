#include<stdio.h>
#include<stdlib.h>

int DisplayOdd(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt<=iNo ; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;
}
