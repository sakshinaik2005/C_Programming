#include<stdio.h>

int SumNonFact(int iNo)
{
    int icnt = 0,iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1;icnt < iNo;icnt++)
    {
        if(iNo % icnt != 0)
        {
            iSum = iSum + icnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
