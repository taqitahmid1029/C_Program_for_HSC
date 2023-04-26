#include<stdio.h>

int main()
{
    int i;
    double sum = 0;
    for (i = 10; i <= 1000; i+=10)
    {
        sum = sum + i*i*i;
    }
    printf("Summation is %.0lf", sum);
    return 0;
}
