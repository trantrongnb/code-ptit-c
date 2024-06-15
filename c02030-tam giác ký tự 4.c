#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int k=0;
    for(int cnt=1;cnt<=n;cnt++){
        int d=0;
        for(int i=1;i<=cnt;i++){
            printf("%c",64+k);
            k+=2;
            d++;
        }
        for(int i=cnt-1;i>=1;i--){
            printf("%c",64+k-2-2);
            k-=2;
        }
        k=0;
        printf("\n");
    }
}