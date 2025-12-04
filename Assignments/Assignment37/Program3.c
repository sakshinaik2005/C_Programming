//write a program which accept string from user and accept one character . return index of first occurance of that character

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')  
    {
        if(str[iCnt] == ch)   
        {
            return iCnt;      
        }
        iCnt++;
    }

    return -1;  
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);  

    iRet = FirstChar(arr, cValue);

    if(iRet != -1)
        printf("Character location is %d\n", iRet);
    else
        printf("Character not found in the string.\n");

    return 0;
}
