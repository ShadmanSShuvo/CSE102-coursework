#include<stdio.h>

int main()
{
    char x, y;
    int n;

    scanf("%c%*c%d", &x, &n);
    x=x-65;
    y=x+n;
    y=y%26;
    y=y+65;
    printf("%c\n", y);

    return 0;
}
