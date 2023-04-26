#include<stdio.h>

int main()
{
    int i, sum=0;
    for(i = 100; i >= 10; i = i - 10)
    {
        sum = sum + i;
    }
    printf("Summation is %d", sum);
    return 0;
}
