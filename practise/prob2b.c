#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, r;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    
    r=1000*(n%10) + 100*((n%100)/10) + 10*((n%1000)/100) + (n%10000)/1000;
    printf("Reverse of %d is %d", n, r);
    return 0;
}
