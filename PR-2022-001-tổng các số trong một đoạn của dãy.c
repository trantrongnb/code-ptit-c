#include<stdio.h>
int main(){
    int uo,d;
    scanf("%d%d",&uo,&d);
    long long s=0;
    int n;scanf("%d",&n);
    s=(n)*uo+d*(n)*(n-1)/2;
    printf("%lld",s);
}