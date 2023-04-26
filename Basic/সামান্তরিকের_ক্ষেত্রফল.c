#include<stdio.h>

int main()
{
    float b, h, area;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    area=b*h;
    printf("Area of the parallelogram is %.2f", area);
    return 0;
}
