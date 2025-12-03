#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;   
    }

    switch(chDiv)
    {
        case 'A':
            printf("Exam at 7:00 AM\n");
            break;

        case 'B':
            printf("Exam at 8:30 AM\n");
            break;

        case 'C':
            printf("Exam at 9:20 AM\n");
            break;

        case 'D':
            printf("Exam at 10:30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf(" %c",&cValue);  

    DisplaySchedule(cValue);

    return 0;
}
