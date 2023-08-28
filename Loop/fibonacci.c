#include<stdio.h>

int main()
{
    int a=0, b=1, c, n, i;
    printf("Enter nth number: ");
    scanf("%d", &n);
    n=n-2;
    printf("0, 1");
    for(i=1; i<=n; i++) {
        c=a+b;
        printf(", %d", c);
        a=b;
        b=c;
    }
    return 0;
}
