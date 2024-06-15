#include<stdio.h>
int ucln(int   a,int  b){
    if(b==0){
        return a;
    }
    return ucln(b,a%b);
}
int main(){
   int t;scanf("%d",&t);
   while(t--){
    int a,b;scanf("%d%d",&a,&b);
    int d=ucln(a,b);
    long long s=(long long)a*b/d;
    printf("%lld ",s);
    printf("%d\n",d);
   }
   
}