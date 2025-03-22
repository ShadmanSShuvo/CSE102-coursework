#include<stdio.h>

int main()
{
    int n, a, b, c, d, t, max, x, y, z;
    scanf("%d", &n);
    a = n/1000;
    b = (n%1000)/100;
    c = (n%100)/10;
    d = n%10;
    
    if (a>=b && a>= c && a>= d)
    {
        max = a;
        x=b, y=c, z=d;
    }

    else if (b>=a && b>= c && b>= d)
    {
        max = b;
        x=a, y=c, z=d;
    }

    else if (c>=b && c>= a && c>= d)
    {
        max = c;
        x=b, y=a, z=d;
    }
    
    else if (d>=b && d>= c && d>= a)
    {
        max = d;
        x=b, y=c, z=a;
    }

    else
        printf("Invalid input.\n");

    if (x>y && x>z)
    {
        if (x==max)
        {
            if(y>z) printf("second largest: %d", y);
            else printf("second largest: %d", z);
        }
        else 
            printf("second largest: %d", x);
    }

    else if (y>x && y>z)
    {
        if (y==max)
        {
            if(x>z) printf("second largest: %d", x);
            else printf("second largest: %d", z);
        }
        else
        printf("second largest: %d", y);
    }
    else{
        if (z==max)
        {
            if(x>y) printf("second largest: %d", x);
            else printf("second largest: %d", y);
        }
        else
        printf("second largest: %d", z);
    }

    return 0;
}
