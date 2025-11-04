#include <stdio.h>

int count_factors(int number)
{
    int count = 0;
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));

    return 0;
}

// Time Complexity : O(n)
