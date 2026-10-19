#include<stdio.h>

//-----------------------------------------------------
//  Function Name : Diplay
//  Description :   It is used to display a number 5 to 1
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d", i);
        i--;
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
    Display();

    return 0;
}