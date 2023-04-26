#include<stdio.h>

int main()
{
    float K, F;
    printf("Enter Kelvin temperature: ");
    scanf("%f", &K);
    F=(9/5)*(K-273)+32;
    printf("Fahrenheit temperature is %.2f", F);
    return 0;
}
