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
      long long a,b;scanf("%lld%lld",&a,&b);
      int i=sqrt(a);
      if(i*i==a){
         i=i;
      } else {
         i++;
      }
      int d=0;
      for(int j=i;j<=sqrt(b);j++){
         if(nt(j)==1){
            d++;
         }
      }
      printf("%d\n",d);
   }

 }