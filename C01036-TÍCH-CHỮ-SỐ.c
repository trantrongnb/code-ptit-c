#include <stdio.h>
#include<math.h>
int main(){
  int n;scanf("%d",&n);
  int s=1;
  while(n!=0){
    s*=n%10;
    n/=10;
  }
  printf("%d",s);
}