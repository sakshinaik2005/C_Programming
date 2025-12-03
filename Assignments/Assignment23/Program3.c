#include <stdio.h>
#include <stdlib.h>

int LastOcc(int A[], int iLength, int iNo)
{
    int i = 0;
    int iPos = -1; 

    for(i = 0; i < iLength; i++)
    {
        if(A[i] == iNo)
        {
            iPos = i;    
        }
    }
    return iPos; 
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &iValue);

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is at index: %d", iRet);
    }

    free(p);

    return 0;
}
