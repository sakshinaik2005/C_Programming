//write a program which accept string from user and copy that character of that string into another string in reverse order

#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *ptr = src;

    while(*ptr != '\0')
        ptr++;

    ptr--; 

    while(ptr >= src)
    {
        *dest = *ptr;
        dest++;
        ptr--;
    }

    *dest = '\0'; 
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s\n", brr);

    return 0;
}
