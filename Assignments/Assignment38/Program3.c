//write a program which accept string from user and copy that character of that string into another string by converting all small character into capital case

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
            *dest = *src - 32;  
        else
            *dest = *src;        

        src++;
        dest++;
    }
    *dest = '\0';  
}

int main()
{
    char arr[30] = " marvellous Python 2";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}
