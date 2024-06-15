#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int d,c;scanf("%d%d",&d,&c);
   for(int i=1;i<=d;i++){
     int k=0;
     for(int j=i;j<=c;j++){
      printf("%c",64+j);
      k++;
     }
     if(k<c){
      for(int i=c-k;i>=1;i--){
         printf("%c",64+i);
      }
     }
     printf("\n");
}
}