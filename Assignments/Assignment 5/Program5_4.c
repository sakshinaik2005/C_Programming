#include<stdio.h>

void CheckNumberType(int num)
{
  if(num > 0)
  {
    printf("The number is positive\n");
  }
  else if(num < 0)
  {
    printf("The number is negative\n");
  }
  else{
    printf("The number is zero\n");
  }
}
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}
