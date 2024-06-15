#include<stdio.h>
#include<math.h>
int check(int n){
    if(n==1) return 0;
    int d=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            d+=i;
           if(n%(n/i)==0&&i*i!=n){
            d+=n/i;
           }
        }
    }
    if(d==n) return 1;
    return 0;
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    if(a>b){
        int d=a;
        a=b;
        b=d;
    }
    for(int i=a;i<=b;i++){
        if(check(i)==1){
            printf("%d ",i);
        }
    }
}