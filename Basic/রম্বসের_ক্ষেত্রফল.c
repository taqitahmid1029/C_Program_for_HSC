#include<stdio.h>

int main()
{
    float a, b, area;
    printf("Enter 2 diagonals: ");
    scanf("%f %f", &a, &b);
    area=(a*b)/2;
    printf("Area of the rhombus is %.2f", area);
    return 0;
}
