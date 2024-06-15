#include <stdio.h>
#include<math.h>
#include<string.h>
int gt(int n){
  int s=1;
  for(int i=2;i<=n;i++){
    s*=i;
  }
  return s;
}
int main(){
  int n;scanf("%d",&n);
   int s=0;
   int d=n;
   while(n!=0){
    s+=gt(n%10);
    n/=10;
   }
   if(s==d){
    printf("1");
   } else {
    printf("0");
   }
}