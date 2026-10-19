#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//-----------------------------------------------------
//  Function Name : Check
//  Description :   It is used to perform enter number is divisible by 5 or not 
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet =FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if (bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}