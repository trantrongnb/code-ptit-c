#include<stdio.h>
 int ucln(long long  a,long long  b){
    if(b==0){
        return a;
    }
     return ucln(b,a%b);
 }
int main(){
    long long  a,b;scanf("%lld%lld",&a,&b);
    ucln(a,b);
    printf("%d\n",ucln(a,b));
    printf("%lld\n",a*b/ucln(a,b));
}