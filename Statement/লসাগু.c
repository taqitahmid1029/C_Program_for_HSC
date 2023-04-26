#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        temp=a;
    else
        temp=b;
    again:
    if(temp%a==0 && temp%b==0)
        printf("lcm is %d", temp);
    else {
        temp=temp+1;
        goto again;
    }
    return 0;
}
