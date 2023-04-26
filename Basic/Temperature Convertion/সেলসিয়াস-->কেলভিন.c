#include<stdio.h>

int main()
{
    float C, K;
    printf("Enter Celcius temperature: ");
    scanf("%f", &C);
    K=C+273;
    printf("Kalvin temperature is %.2f", K);
    return 0;
}
