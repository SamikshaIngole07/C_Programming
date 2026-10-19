#include<stdio.h>

//-----------------------------------------------------
//  Function Name : Accept
//  Description :   It is used to display number of * 
//  Input :         int
//  Output :        pattern(*)
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void Accept(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt<=iNo ; iCnt++)
    {
        printf("*");

    }
}
//-----------------------------------------------------
//  Function Name : main
//  Description   : It is an entry point function
//  Input         : None
//  Output        : None
//  Author        : Samiksha Ingole
//  Date          : 19/10/2026
//-----------------------------------------------------
int main()
{
    int iValue = 0;
    
    iValue =5 ;
    Accept(iValue);
    return 0;
}