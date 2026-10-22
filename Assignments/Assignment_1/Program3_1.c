#include<stdio.h>

//-----------------------------------------------------
//  Function Name : PrintEven
//  Description :   It is used display even number
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int num;
    for(num=1;num<=iNo;num++)
    {
        printf("%d  ",num*2);
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

    PrintEven(iValue);

    return 0;
}