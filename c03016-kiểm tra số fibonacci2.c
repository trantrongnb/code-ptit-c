#include<stdio.h>
#include<math.h>
typedef long long ll;
     ll a[100];
int fibo(){
    a[0]=0;a[1]=1;
    for(int i=2;i<100;i++){
        a[i]=a[i-1]+a[i-2];
    }
}
void kt(ll n){
    fibo();
    for(int i=0;i<100;i++){
        if(n==a[i]){
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}
int main(){
   int t;scanf("%d",&t);
   while(t--){
    ll n;scanf("%lld",&n);
    kt(n);
}
}