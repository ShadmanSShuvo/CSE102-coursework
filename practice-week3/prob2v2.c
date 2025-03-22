#include<stdio.h>

int main()
{
    int s, t, ts, x;
    scanf("%d", &s);
    //printf("s= %d\n", s); 
    x = (s>300000) + (s> 400000) + (s>700000) + (s>1100000) + (s>1600000);
    //printf("x= %d\n", x);


    //printf("test t = %d\n", t);

    switch (x)
    {
    case 0:
        t=0;
        break;
    case 1:
        t=(s-300000)*0.05;
        break;
    case 2:
        t=5000+(s-400000)*0.1;
        break;
    case 3:
        t=5000+30000+(s-700000)*0.15;
        break;
    case 4:
        t=5000+30000+60000+(s-1100000)*0.2;
        break;
    case 5:
        t=5000+30000+60000+100000+(s-1600000)/4;
        break;
    }

    ts = s - t;
    printf("%d", ts);
    return 0;
}
