#include <stdio.h>

int main()
{
    int n, num;
    int sum = 0;
    int min, max;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);

    scanf("%d", &num);

    sum = num;
    min = num;
    max = num;

    for(int i = 1; i < n; i++)
    {
        scanf("%d", &num);

        sum += num;

        if(num < min)
            min = num;

        if(num > max)
            max = num;
    }

    average = (float)sum / n;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}