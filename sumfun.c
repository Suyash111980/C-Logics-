#include <stdio.h>

int display(int *p, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        printf("\n%5d", *(p + i));

        sum = sum + *(p + i);
    }

    return sum;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum;

    sum = display(arr, 5);

    printf("\nSum = %d", sum);

    return 0;
}