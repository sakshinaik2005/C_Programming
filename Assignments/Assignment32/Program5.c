
/*
  Input : 4  iCol : 4
  Output :  1  2   3   4   5
            1  2           5
            1      3       5
            1          4   5
            1   2   3   4  5
*/


#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int N = iRow + 1; 

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(i == 1 || i == N)             
                printf("%d\t", j);

            else if(j == 1)                     
                printf("1\t");

            else if(j == N)                     
                printf("%d\t", N);

            else if(i == j)                     
                printf("%d\t", j);

            else
                printf("\t");                   
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d", &iValue1);

    printf("Enter number of rows and columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
