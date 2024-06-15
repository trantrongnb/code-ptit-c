#include<stdio.h>
typedef long long ll;
ll lon(ll a,ll b){
if(a>=b) return a;
return b;
}
void solve(){
    int n;scanf("%d",&n);
    ll a[n];
    ll max=0,s=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        s+=a[i];
        if(s<0){
            s=0;
        }
        max=lon(max,s);
    }
    printf("%lld\n",max);
}
int main()
{
    int t;scanf("%d",&t);
    while(t--){
        solve();
    }
}