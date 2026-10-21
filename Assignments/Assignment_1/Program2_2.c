#include<stdio.h>

//-----------------------------------------------------
//  Function Name : Display
//  Description :   It is used to display number of * 
//  Input :         int
//  Output :        pattern(*)
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void Display(int iNo)
{
    
    while(iNo>0)
    {
        printf("*\n");
        iNo--;
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

    printf("Enter Number :");
    scanf("%d",&iValue);
    
    Display(iValue);
   
    return 0;
}