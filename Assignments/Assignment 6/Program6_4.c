#include <stdio.h>

int Multiply(int no1, int no2, int no3)
{
    if(no1 == 0) no1 = 1;
    if(no2 == 0) no2 = 1;
    if(no3 == 0) no3 = 1;

    return no1 * no2 * no3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d", iRet);

    return 0;
}

// Time Complexity : O(1)
