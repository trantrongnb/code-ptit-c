#include <stdio.h>
#include<math.h>
int main() {
  int t;scanf("%d",&t);
  while(t--){
  int a;scanf("%d",&a);
  int s=0;
  while(a!=0){
   s+=a%10;
   a/=10;
  }
  printf("%d\n",s);
}
}