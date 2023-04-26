#include<stdio.h>
#include<math.h>

int main() {
    float a, b, area;
    printf("Enter equal side and base: ");
    scanf("%f %f", &a, &b);
    area=(b/4)*sqrt(4*a*a-b*b);
    printf("Area of isosceles triangle is %.2f", area);
    return 0;
}
