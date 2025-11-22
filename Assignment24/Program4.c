#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, temp = 0, count = 0;

    printf("Numbers containing 3 digits are:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        temp = Arr[iCnt];
        if(temp < 0)
        {
            temp = -temp;
        }

        count = 0;
        while(temp != 0)
        {
            temp = temp / 10;
            count++;
        }

        if(count == 3)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
