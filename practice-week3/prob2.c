#include<stdio.h>

int main()
{

    float s, ts;
    printf("Enter salary:");
    scanf("%f", &s);
    if (s<=300000)
    {
        ts=s;
    }
    else if (s <= 400000)
    {
        ts = s - ( s-300000 )*0.05;
    }
    else if (s <= 700000)
    {
        ts = s- ((s-400000)*0.1 + 100000*0.05);
    }
    else if (s <= 1100000)
    {
        ts = s- ((s-700000)*0.15 + 300000*0.1 + 100000*0.05);
    }
    else if (s <= 1600000)
    {
        ts = s- ((s-1100000)*0.2 + 400000*0.15 + 300000*0.1 + 100000*0.05);
    }
    else
        ts = s- ((s-1600000)*0.25 + 500000*0.2 + 400000*0.15 + 300000*0.1 + 100000*0.05);
    
    printf("%g",ts);
 
    return 0;
}
