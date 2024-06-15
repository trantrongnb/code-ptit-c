#include<stdio.h>
#include<string.h>
int main(){
   int t;scanf("%d",&t);
   getchar();
   while(t--){
      char a[201];
      gets(a);
      char *token=strtok(a," ");
      int d=0;
      while(token!=NULL){
         token=strtok(NULL," ");
         d++;
      }
      printf("%d\n",d);
   }
}