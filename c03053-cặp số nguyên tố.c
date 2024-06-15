#include<stdio.h>
#include<string.h>
#include<math.h>
int nt(int n){
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
 int main(){
   int t;scanf("%d",&t);
   while(t--){
      int n;scanf("%d",&n);
      for(int i=2;i<=n/2;i++){
         if(nt(i)==1&&nt(n-i)==1){
            printf("%d %d ",i,n-i);
         }
      }
      printf("\n");
   }
 }