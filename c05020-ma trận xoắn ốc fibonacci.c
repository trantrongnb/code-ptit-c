#include<stdio.h>
long long  fibo[81];
void fibonaci(){
 fibo[0]=0;
 fibo[1]=1;
 for(int i=2;i<=80;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
 }
}
int main(){
    fibonaci();
    int n;scanf("%d",&n);
    long long  a[n+1][n+1];
    int cnt=0;
    int h1=1,h2=n,c1=1,c2=n;
    while(h1<=h2&&c1<=c2){
        for(int i=c1;i<=c2;i++){
            a[h1][i]=fibo[cnt];
            cnt++;
        }
        h1++;
        for(int i=h1;i<=h2;i++){
            a[i][c2]=fibo[cnt];
            cnt++;
        }
        c2--;
        if(c1<=c2){
            for(int i=c2;i>=c1;i--){
                a[h2][i]=fibo[cnt];
                cnt++;
            }
        }
        h2--;
        for(int i=h2;i>=h1;i--){
            a[i][c1]=fibo[cnt];
            cnt++;
        }
        c1++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}