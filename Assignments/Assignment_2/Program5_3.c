#include <stdio.h>
#include <stdlib.h>
void DisplayGrade(float fMarks)
{
    if(fMarks>100)
    {
        printf("Invalid marks");
    }
    else if(fMarks>=90)
    {
        printf("Grade: A");
    }
    else if(fMarks<=89 && fMarks>=75)
    {
        printf("Grade: B");
    }
    else if (fMarks<=74 && fMarks>=60)
    {
        printf("Grade: C");
    }
    else if (fMarks<=59 && fMarks>=40)
    {
        printf("Grade: D");
    }
    else 
    {
        printf("Fail");
    }
    
}
int main()
{
float fMarks = 0.0f;
printf("Enter marks: ");
scanf("%f", &fMarks);
DisplayGrade(fMarks);
return EXIT_SUCCESS;
}