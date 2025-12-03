// Accept character from user and check whether it is digit or nor
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkDigit(char ch)
{
  if(ch >= '0' && ch <= '9')  
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
  bool bRet = FALSE;

  printf("Enter the Digit:\n");
  scanf("%c",&cValue);
  
  bRet = ChkDigit(cValue);

  if(bRet == TRUE)
  {
    printf("It is Digit");
  }
  else
  {
    printf("It is not a Digit");
  }
  return 0;
}
