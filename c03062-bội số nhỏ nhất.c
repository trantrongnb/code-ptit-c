#include<stdio.h>
long long  ucln(long long a,long long b){
    if(b==0) return a;
    return ucln(b,a%b);
}
void check(){
    int a,b;scanf("%d%d",&a,&b);
    long long  s=1;
   for(int i=a;i<=b;i++){
   s=(long long)(i*s)/ucln(i,s);
   }
   printf("%lld",s);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
       check();
       printf("\n");
    }
}