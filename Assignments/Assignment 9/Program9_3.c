#include <stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if (iNo < 0)        
    {
        iNo = -iNo;
    }

    for (i = iNo; i >= 2; i--)
    {
        if (i % 2 == 0)  
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}

// Time Complexity : O(n)
