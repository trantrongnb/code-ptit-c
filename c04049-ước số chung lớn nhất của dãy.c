#include<stdio.h>
typedef long long ll;
ll ucln(ll a,ll b){
    if(b==0) return a;
    return ucln(b,a%b);
}
long long bcnn(ll a,ll b){
    return a*b/ucln(a,b);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        ll a[n],b[n+1];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
       b[0]=a[0];
       for(int i=1;i<n;i++){
        b[i]=bcnn(a[i],a[i-1]);
       }
       b[n]=a[n-1];
       for(int i=0;i<n+1;i++) printf("%lld ",b[i]); 
    printf("\n");
    }
}