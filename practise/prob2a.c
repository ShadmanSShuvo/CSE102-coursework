#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y, z, t, r;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    x=n%10;
    y=(n%100)/10;
    z=(n%1000)/100;
    t=(n%10000)/1000;
    r=1000*x + 100*y + 10*z + t;
    printf("Reverse of %d is %d", n, r);
    return 0;
}
