//write a program which accept string from user reverse that string in place

#include <stdio.h>
#include <string.h>

void StrRev(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    while(str[end] != '\0')
    {
        end++;
    }
    end--; 

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    StrRev(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
