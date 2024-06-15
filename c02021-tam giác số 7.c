#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t=i,k=n,s=0;
        for(int j=1;j<=i;j++){
            printf("%d ",t+s*k);
            t=t+s*k;
            s=1;
            k--;
        }
        printf("\n");
        }
    }
