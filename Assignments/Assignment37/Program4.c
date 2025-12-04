//write a program which accept string from user and accept one character.return index of last occurance of that character

#include <stdio.h>

int LastChar(char *str, char ch)
{
     int iCnt = 0;
    int lastIndex = -1;

    while(str[iCnt] != '\0')   
    {
        if(str[iCnt] == ch)   
        {
            lastIndex = iCnt;  
        }
        iCnt++;
    }

    return lastIndex;      
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}
