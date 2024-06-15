#include<stdio.h>
#include<string.h>
int main(){
   int n;scanf("%d",&n);
   int d=n;
   for(int i=1;i<2*n;i+=2){
      int k=i;
      for(int i=1;i<=d;i++){
         printf("%c",k+64);
         k+=2;
      }
      d--;
      printf("\n");
   }
}