#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    printf("[ ");
    for (int i = 0; i < n; i++){
        for(int j=i+1; j<n; j++){
            if(i==j) continue;
            else{
                for(int k=j+1; k<n; k++){
                    if(j==k) continue;
                    else{
                        if(i==k) continue;
                        else{
                            if(a[i] + a[j] + a[k] == 0){
                                printf("[%d, %d, %d],", a[i], a[j], a[k]);
                            }
                        
                        }

                    }
                }
            }
        }
    }
    printf("\b ]");
    

    return 0;
}