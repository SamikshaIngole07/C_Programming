#include<stdio.h>

//-----------------------------------------------------
//  Function Name : DisplayFactor
//  Description :   It is used display factors number
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ",i);
        }
    }
    
    
}
//-----------------------------------------------------
//  Function Name : main
//  Description   : It is an entry point function
//  Input         : int
//  Output        : int
//  Author        : Samiksha Ingole
//  Date          : 19/10/2026
//-----------------------------------------------------
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}