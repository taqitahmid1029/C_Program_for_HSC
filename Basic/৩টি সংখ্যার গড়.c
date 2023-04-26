#include<stdio.h>

int main() {
    float a, b, c, avg;
    printf("Enter 3 integers: ");
    scanf("%f %f %f", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("Average is %f", avg);
    return 0;
}
