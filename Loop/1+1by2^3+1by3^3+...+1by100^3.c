#include<stdio.h>

int main()
{   float i, n, sum = 0;
    printf("Enter last nummber: ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1/(i*i*i);
    }
    printf("Summation is %.3f", sum);
    return 0;
}
