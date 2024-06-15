#include<stdio.h>
#include<math.h>
int main(){
   int d,c;scanf("%d%d",&d,&c);
   int t=c;
   if(d>c){
       t=d;
   } int k=1;
   for(int i=1;i<=d;i++){
      int x=0;
       for(int i=1;i<=k;i++){
         printf("%c",97+t-i);
         x++;
       }
       while(x<c){
         printf("%c",97+t-k);
         x++;
       }
       if(k<c){
         k++;
       } else {
         k=c;
       }
       printf("\n");
     }
}