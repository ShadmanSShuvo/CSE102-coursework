#include<stdio.h>

int main()
{
    int n, a, b, c, d, max, max2=-1;
    
    scanf("%d", &n);
    a = n/1000;
    b = (n%1000)/100;
    c = (n%100)/10;
    d = n%10;

    max=a;
    if (b>max) max = b;
    if (c>max) max = c;
    if (d>max) max = d;

    if(a>max2 && a != max) max2 = a;
    if(b>max2 && b != max) max2 = b;
    if(c>max2 && c != max) max2 = c;
    if(d>max2 && d != max) max2 = d;

    printf("max2 = %d", max2);
    
    
    return 0;
}
