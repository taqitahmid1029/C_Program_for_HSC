#include<stdio.h>
#include<math.h>

int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area=3.1416*pow(r,2);
    printf("Area is %.2f", area);
    return 0;
}
