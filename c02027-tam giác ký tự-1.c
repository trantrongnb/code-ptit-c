#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int d=97;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++)
            printf("%c ",d++);
        } else{
            d=d+i-1;
            for(int j=i;j>=1;j--){
                printf("%c ",d--);
            }
            d=d+i+1;
        }
        printf("\n");
    }}