// Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    int ascii = (int)ch;

    if(ascii == 33 || ascii == 64 || ascii == 35 || ascii == 36 ||
       ascii == 37 || ascii == 94 || ascii == 38 || ascii == 42)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}
