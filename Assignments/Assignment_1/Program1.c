#include<stdio.h>

//-----------------------------------------------------
//  Function Name : Divide
//  Description :   It is used to perfrom division of two numbers
//  Input :         int , int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

//-----------------------------------------------------
//  Function Name : main
//  Description   : It is an entry point function
//  Input         : int, int
//  Output        : int
//  Author        : Samiksha Ingole
//  Date          : 19/10/2026
//-----------------------------------------------------
int main()
{
    int iValue1 =15 ,iValue2 =5;
    int iRet = 0;
    
    iRet = Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;
}