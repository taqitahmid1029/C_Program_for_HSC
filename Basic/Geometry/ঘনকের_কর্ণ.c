#include<stdio.h>
#include<math.h>

int main() {
    float a, l;
    printf("Enter side: ");
    scanf("%f", &a);
    l=a*sqrt(3);
    printf("Corner of cube is %.2f", l);
    return 0;
}
