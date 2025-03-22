#include<stdio.h>

int main()
{
    int x, n;
    float t=1.0, r, s=t;
    char c, d;
    scanf("%d%d", &x, &n);

    printf("%g\n", t);
    for (int i = 1; i <= n; i++)
    {
        /*if(i%2==1) c='-';
        else c='+';*/
       /* if(i>1 && s>0) printf("+%g+%g\n", s, t);
        else if(i>1 && s<0) printf("%g%g\n", s, t);
        d='%g'*/
        t=(-1.0)*t*((1.0*x)/i);
        for (int j = 0; j < i; j++)
        {
            printf("%g%g\n",s,t);
        }
        
        s=s+t;
    }
    

    printf("\nsum = %f\n", s);
    return 0;
}
