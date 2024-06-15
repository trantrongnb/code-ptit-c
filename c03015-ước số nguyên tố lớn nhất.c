#include<stdio.h>
#include<math.h>
typedef long long ll;
 int nt(ll n){
  if(n<2){
    return 0;
  }
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
 }
void solve(){
 ll n;scanf("%lld",&n);
 ll res=0;
 for(ll i=1;i<=sqrt(n);i++){
   if(n%i==0){
    if(nt(n/i)==1){
      printf("%lld\n",n/i);
      return ;
    }
    if(nt(i)==1){
      res=i;
    }
   }
}
printf("%lld\n",res);
}
int main(){
  int t;scanf("%d",&t);
  while(t--){
    solve();
  }
}