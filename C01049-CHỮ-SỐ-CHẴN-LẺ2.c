#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
  int t;scanf("%d",&t);
  while(t--){
  int n;scanf("%d",&n);
  int l=0,c=0;
  while(n!=0){
    if((n%10)%2==0){
      c++;
    } else {
      l++;
    }
    n/=10;
  }
  printf("%d %d\n",l,c);

}
}