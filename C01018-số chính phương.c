#include <stdio.h>
#include<math.h>
int main() {
  int t;scanf("%d",&t);
  while(t--){
    int a;scanf("%d",&a);
    int d=sqrt(a);
    if(d*d==a){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
  }
}