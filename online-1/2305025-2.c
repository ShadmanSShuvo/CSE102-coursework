#include<stdio.h>


int main()
{
    float u, b;
    printf("Enter consumed unit: ");
    scanf("%f", &u);
    if (u<=100)
    {
        b = 2*u;
    }

    else if (u<=300)
    {
        b = 2*100 + 2.5*(u-100);
    }

    else if (u<=500)
    {
        b = 2*100 + 2.5*200 + 5*(u-300);
    }
    else
        b = 2*100 + 2.5*200 + 5*200 + 7*(u-500);
    
    printf("Bill: BDT %g Tk", b);
    
    return 0;
}
