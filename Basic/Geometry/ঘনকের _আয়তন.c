#include<stdio.h>

int main() {
    float a, volume;
    printf("Enter side: ");
    scanf("%f", &a);
    volume=a*a*a;
    printf("Volume of cube is %.2f", volume);
    return 0;
}
