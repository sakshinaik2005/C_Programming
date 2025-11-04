#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if (iStart > iEnd || iStart < 0 || iEnd < 0) 
    {
        return -1;  
    }

    for (int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}

// Time Complexity : O(n)
