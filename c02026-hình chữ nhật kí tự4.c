#include<stdio.h>
int main(){
   int d,c;scanf("%d%d",&d,&c);
   int cnt=64+d;
   for(int i=1;i<=d;i++){
      int s=cnt;
      if(s>64+c) s=64+c;
      for(int i=1;i<=c;i++){
         if(s==64+c){
            printf("%c",s);
         } else {
            printf("%c",s++);
         }
      }
      cnt--;
      printf("\n");
   }
}