#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t=2;
        for(int j=1;j<=i;j++){
            printf("%d",t);
            t=t+2;
        }
        t=t-2;
        for(int k=i-1;k>=1;k--){
            printf("%d",t-2);
            t=t-2;
        }
        printf("\n");
    }
}