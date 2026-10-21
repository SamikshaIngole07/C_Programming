#include<stdio.h>

//-----------------------------------------------------
//  Function Name : Display
//  Description :   It is used to display message 
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ", iNo);
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
    int iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);
    
    printf("Enter Frequency :");
    scanf("%d",&iCount);
    Display(iValue,iCount);
   
    return 0;
}