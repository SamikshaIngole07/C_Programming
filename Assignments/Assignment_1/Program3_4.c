#include<stdio.h>

//-----------------------------------------------------
//  Function Name : DisplayConvert
//  Description :   It is used convert lowercase character into
//                  uppercase character
//  Input :         int
//  Output :        int
//  Author :        Samiksha Ingole
//  Date :          19/10/2026
//-----------------------------------------------------
void DisplayConvert(char CValue)
{
    if(CValue>='a' && CValue<='z')
    {
    printf("%c" ,CValue-32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue+32);
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
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}