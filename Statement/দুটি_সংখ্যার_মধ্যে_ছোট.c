#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if(a<b)
        printf("%d is smaller number", a);
    else
        printf("%d is smaller number", b);
    return 0;
}
