#include <stdio.h>

int sum_even_numbers(int limit)
{
    int sum = 0;
    for(int i = 1; i <= limit; i++)
    {
        sum += 2 * i;  
    }
    return sum;
}

int main(void)
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);

    printf("Sum = %d\n", sum_even_numbers(limit));
    return 0;
}

// Time Complexity : O(N)
