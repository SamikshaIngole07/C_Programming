#include<stdio.h>
#include<stdlib.h>

int DisplayOdd(int iNo)
{
    int iCnt = 0;
    int Multipication = 0;
    for(iCnt = 1;iCnt<=5 ; iCnt++)
    {
        Multipication = iCnt * iNo;
        printf("%d\t",Multipication);
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
