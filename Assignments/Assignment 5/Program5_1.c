#include<stdio.h>

void CheckEvenOdd(int num)
{
   if(num % 2 == 0)
   {
    printf("The number is Even\n");
   }
   else
   {
     printf("The number is odd\n");
   }
}
int main()
{
    int number;

    printf("Enter number");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}
