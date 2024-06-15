#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[35];
    a[0]=a[1]=1;
    for(int i=2;i<=34;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<=34;i++){
        if(n==a[i]){
            printf("1");
            return 0;
        }
    }
    printf("0");
}