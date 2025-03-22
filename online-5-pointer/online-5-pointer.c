#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *c;
    c=(char*)malloc(100*sizeof(char));
    scanf("%s", c);
    int n = strlen(c);
    printf("Size: %d\n",n);
    strlwr(c);
    int *d;
    d=(int*)malloc(n*sizeof(int));
    
    for(int i=0; i< n; i++){
        *(d+i) = 0;
    }

    for(int i=0; i< n; i++){
        if(*(c+i)=='a' || *(c+i)=='e' || *(c+i)=='i' ||  *(c+i)=='o' || *(c+i)=='u'){
            *(d+i) = 1;
        }
    }

    // mark vowels in an array
    int m=0;
    for(int i=0; i< n; i++){
        if(*(d+i)==1) m++;
    }

    // store vowels in an array
    char *vwl = (char*)malloc(m*sizeof(char));
    int j=0;
    for(int i=0; i< n; i++){
        if(*(d+i)==1){
            *(vwl+j) = *(c+i);
            j++;
        }
    }

    int cntr = m;
    for(int i=0; i<n; i++){
        
        if((*(d+i))==1){
            *(c+i) = *(vwl + cntr - 1);
            cntr--;
        }
        if(cntr == 0) break;
        
    }

    *(c+n) = '\n';

    printf("%s\n", c);
    if (*d==1)
    {
        char x;
        
        for(int k=0; k<n-1; k++){
            x=*(c+k);
            *(c+k) = *(c+k+1);
            *(c+k+1) = x;
        }
        
    }
    

    printf("%s\n", c);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", *(d+i));
    // }
    // printf("\n");
   
    // printf("%s\n", vwl);
    // printf("Size of vwl: %d\n",m);
    free(c);
    free(d);
    free(vwl);
    return 0;
}