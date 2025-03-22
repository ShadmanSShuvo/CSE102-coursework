#include<stdio.h>

int main()
{
    int a, b, c, x;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    x=a;
    a=c;
    c=b;
    b=x;
    printf("a=%d, b=%d, c=%d", a, b, c);

    return 0;
}
