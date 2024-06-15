#include<stdio.h>
int main(){
   int a,b;scanf("%d%d",&a,&b);
   int d=0;
   for(int i=1;i<=a;i++){
      if(i%2==0){
         int s=i;
         while(s%2==0){
            d++;
            s/=2;
         }
      }
   }
   if(d>=b){
      printf("Yes");
   } else {
      printf("No");
   }
}