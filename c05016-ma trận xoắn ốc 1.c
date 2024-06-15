#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n+1][n+1];
    int cnt=1;
    int h1=1,h2=n,c1=1,c2=n;
    while(h1<=h2&&c1<=c2){
        for(int i=c1;i<=c2;i++){
            a[h1][i]=cnt;
            cnt++;
        }
        h1++;
        for(int i=h1;i<=h2;i++){
            a[i][c2]=cnt;
            cnt++;
        }
        c2--;
        if(c1<=c2){
            for(int i=c2;i>=c1;i--){
                a[h2][i]=cnt;
                cnt++;
            }
        }
        h2--;
        for(int i=h2;i>=h1;i--){
           a[i][c1]=cnt;
           cnt++;
        }
        c1++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}