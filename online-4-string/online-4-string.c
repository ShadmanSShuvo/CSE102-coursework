#include<stdio.h>
#include<string.h>

void removeDuplicates(char str[]){
    int n=strlen(str);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(str[i]==str[j]){
                str[j]='\0';
            }
        }
    }
    printf("String without duplicates: ");
    for(int i=0; i<n; i++){
        if(str[i]!='\0') printf("%c", str[i]);
    }
}
int main(){
    char str[200];
    printf("Enter a string: ");
    int m=strlen(str);
    gets(str);
    removeDuplicates(str);

    for(int i=0; i<m-1; i++){
        int j=i+1;
        while(str[j]=='\0'){
            str[i]=str[j];
            str[i+1]='\0';
            j++;

        }

    }

    printf("\n%s",str);
    return 0;
}


