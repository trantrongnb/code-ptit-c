#include <stdio.h>
#include<math.h>
int main(){
  int a,b;scanf("%d%d",&a,&b);
  int d;
  if(a>=b){
  d=a-b+1;
  } else {
   d=b-a+1;
  }
  long long s=d*(a+b)/2;
  printf("%lld",s);
}