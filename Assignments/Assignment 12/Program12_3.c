#include <stdio.h>

int sum_of_factors(int number)
{
    int sum = 0;
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(void)
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", sum_of_factors(number));
    return 0;
}

// time Complexity : O(n)
