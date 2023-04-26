#include<stdio.h>
#include<math.h>

int main()
{
    float a, area;
    printf("Enter side: ");
    scanf("%f", &a);
    area=pow(a, 2);
    printf("Area of the square is %.2f", area);
    return 0;
}
