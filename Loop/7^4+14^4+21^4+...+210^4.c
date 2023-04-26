#include<stdio.h>

int main()
{
    int i;
    double sum = 0;
    for (i = 7; i <= 210; i = i + 7)
    {
        sum = sum + i*i*i*i;
    }
    printf("Summation is %.0lf", sum);
    return 0;
}
