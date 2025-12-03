// Accept character from user if it is capital then display all the character from the input character till Z. if input character is small then print all the character in reverse order till a. in order cases return directly.

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')       
    {
        for(; ch <= 'Z'; ch++)
        {
            printf("%c ", ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')  
    {
        for(; ch >= 'a'; ch--)
        {
            printf("%c ", ch);
        }
    }
}

int main()
{
    char cValue;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

