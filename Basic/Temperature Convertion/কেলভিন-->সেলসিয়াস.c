#include<stdio.h>

int main()
{
    float K, C;
    printf("Enter Kelvin temperature: ");
    scanf("%f", &K);
    C=K-273;
    printf("Celcius temperature is %.2f", C);
    return 0;
}
