/*
   Input : iRow = 4  iCol = 5
   Output : 2  4  6  8  10
            1  3  5  7  9
            2  4  6  8  10
            1  3  5  7  9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            int num = 2;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d  ", num);
                num += 2;
            }
        }
        else  
        {
            int num = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d  ", num);
                num += 2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

