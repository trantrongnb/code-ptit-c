#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int d=1;
    while(d<=n){
        for(int i=d;i<=n-1;i++){
            printf("~");
        }
        for(int i=d;i<=n;i++){
            if(i==1||i==n){
                for(int i=1;i<=n;i++){
                    printf("*");
                }
            } else {
                printf("*");
                for(int i=2;i<=n-1;i++){
                    printf(".");
                }
                printf("*");
            }
            break;
        }
        printf("\n");
        d++;
    }
}