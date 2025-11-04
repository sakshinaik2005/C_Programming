#include<stdio.h>

int FactDiff(int iNo)
{
    int icnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1;icnt < iNo;icnt++)
    {
        if(iNo % icnt == 0)
        {
            iSumFact = iSumFact + icnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + icnt;
        }
    }
    return iSumFact - iSumNonFact;
}
int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
