#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' || cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
       printf("it is not vowel");
    }
    return 0;
}
