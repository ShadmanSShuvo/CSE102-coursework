#include<stdio.h>

int main()
{
    float s, ts;
    int n;
    scanf("%f", &s);
    n=s/100000; // int type casting


    switch (n)
    {
    case 0:
    case 1:
    case 2:
        ts=s;
        break;
    
    case 3:
        ts = s - ( s-300000 )*0.05;
        break;
    case 4:
    case 5:      
    case 6:
        ts = s- ((s-400000)*0.1 + 100000*0.05);
        break;
    case 7:
    case 8:
    case 9:
    case 10:
        ts = s- ((s-700000)*0.15 + 300000*0.1 + 100000*0.05);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        ts = s- ((s-1100000)*0.2 + 400000*0.15 + 300000*0.1 + 100000*0.05);
        break;   
    
    default:
        ts = s- ((s-1600000)*0.25 + 500000*0.2 + 400000*0.15 + 300000*0.1 + 100000*0.05);
        break;
    }

    printf("%g",ts);

    return 0;

}