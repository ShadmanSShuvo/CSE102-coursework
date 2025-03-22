#include<stdio.h>

int main()
{
    char x, y;
    int n;

    scanf("%c%*c%d", &x, &n);
    //x=x-65;
    n=n%26;
    y=x-n;
    //y=y%26;
    //y=y+26;
    printf("%c\n", y);

    return 0;
}
