#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("%d is greater number", a);
    else
        printf("%d is greater number", b);
    return 0;
}
