/*
  Input : 4  iCol : 4
  Output :   1  2   3   4
                2   3   4
                    3   4
                        4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        // Print leading spaces
        for(j = 1; j < i; j++)
        {
            printf("\t");
        }

        // Print numbers from i to iCol
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}



