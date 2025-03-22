#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);


    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    
    
   

    
    printf("a=%d, b=%d, c=%d", a, b, c);

    return 0;
}
