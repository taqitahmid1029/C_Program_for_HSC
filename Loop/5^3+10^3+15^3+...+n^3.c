#include<stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter last number: ");
    scanf("%d", &n);
    for (i = 5; i <= n; i = i + 5)
    {
        sum = sum + (i*i*i);
    }
    printf("Summation is %d", sum);
    return 0;
}
