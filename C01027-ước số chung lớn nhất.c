#include <stdio.h>
#include<math.h>
 int ucln (int a,int b){
  if(b==0){
    return a;
  }
  return ucln(b,a%b);
 }
int main() {
  int t;scanf("%d",&t);
  while(t--){
   int a,b;scanf("%d%d",&a,&b);
   printf("%d\n",ucln(a,b));
}
}