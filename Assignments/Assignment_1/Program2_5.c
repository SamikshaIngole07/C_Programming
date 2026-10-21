#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//-----------------------------------------------------
//  Function Name : CheckEvn
//  Description :   It is used to perform enter number 
//                  is Even or odd
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
int CheckEvn(int iNo)
{
    if((iNo % 2) == 0)
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

    bRet = CheckEvn(iValue);

    if(bRet==TRUE)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}