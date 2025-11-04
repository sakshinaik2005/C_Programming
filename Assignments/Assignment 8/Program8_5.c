#include <stdio.h>

void TableRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;   
    }

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\t", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

// Time Complexity : O(1)
