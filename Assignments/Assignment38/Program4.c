//write a program which accept string from user and copy that character of that string into another string by converting all capital character into small case

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
            *dest = *src + 32;  
        else
            *dest = *src;      

        src++;
        dest++;
    }
    *dest = '\0';  
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}
