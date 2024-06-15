#include<stdio.h>
#include<string.h>
typedef long long ll;
ll ucln(ll a,ll b){
  if(b==0) return a;
  return ucln(b,a%b);
}
ll bcnn(ll a,ll b){
  ll s=a*b/ucln(a,b);
  return s;
}
void tong(ll a,ll m,ll s){
  ll sum=a+m;
  ll uc=ucln(sum,s);
  sum=sum/uc;
  s=s/uc;
  printf("%lld/%lld\n",sum,s);
}
void chia(ll a,ll m){
  ll ch=ucln(a,m);
  a=a/ch;
  m=m/ch;
  printf("%lld/%lld\n",a,m);
}
void rutgon(ll *a,ll *b){
  ll m=*a,n=*b;
  ll uc=ucln(m,n);
  *a=*a/uc;
  *b=*b/uc;
}
void quydong(ll a,ll b,ll m,ll n){
  rutgon(&a,&b);
  rutgon(&m,&n);
  ll s=bcnn(b,n);
  a=s/b*a;
  m=s/n*m;
   printf("%lld/%lld %lld/%lld\n",a,s,m,s);
  tong(a,m,s);
  chia(a,m);
}
int main(){
  int t;scanf("%d",&t);
  for(int i=1;i<=t;i++){
ll a,b,m,n;scanf("%lld%lld%lld%lld",&a,&b,&m,&n);
printf("Case #%d:\n",i);
 quydong(a,b,m,n);
}
}