#include<stdio.h>
typedef long long ll;
int ucln(ll a,int b){
    if(b==0){
        return a;
    }
    return ucln(b,a%b);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        ll s=0,d=1;
        for(int i=1;i<=n;i++){
          s=(ll)d*i/ucln(d,i);
          d=s;
        }
        printf("%lld\n",s);
    }
}