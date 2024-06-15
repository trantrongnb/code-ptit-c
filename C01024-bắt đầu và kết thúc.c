#include <stdio.h>
#include<math.h>
int main() {
  int t;scanf("%d",&t);
  while(t--){
  int a;scanf("%d",&a);
  int k=a%10;
  int b;
  while(a!=0){
    b=a%10;
    a/=10;
  }
  if(k==b){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}
}