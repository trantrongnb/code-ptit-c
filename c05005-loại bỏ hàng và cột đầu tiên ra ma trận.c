#include<stdio.h>
int main(){
   int t;scanf("%d",&t);
   for(int k=1;k<=t;k++){
  int d,c;scanf("%d%d",&d,&c);
  int a[d][c];
  for(int i=0;i<d;i++){
   for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
   }
   printf("\n");
  }
  printf("Test %d:\n",k);
  for(int i=1;i<d;i++){
   for(int j=1;j<c;j++){
     printf("%d ",a[i][j]);
   }
   printf("\n");
  }
  printf("\n");
}
}