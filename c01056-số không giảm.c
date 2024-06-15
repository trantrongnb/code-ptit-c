#include<stdio.h>
#include<string.h>
int xuli(long long n){
    int  d=n%10;
    n/=10;
    while(n!=0){
        if(d<n%10){
            return 0;
        } else {
            d=n%10;
        }
        n/=10;
    }
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
    long long n;scanf("%lld",&n);
    if(xuli(n)==0){
        printf("NO\n");
    } else {
        printf("YES\n");
    }
}
}