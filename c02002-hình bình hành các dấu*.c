#include<stdio.h>
#include<string.h>
int main(){
    int n;scanf("%d",&n);
    int d=1;
    while(d<=n){
        for(int i=d;i<=n-1;i++){
            printf("~");
        }
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
        d++;
    }
}