#include<stdio.h>
int main(){
  int d,c;scanf("%d%d",&d,&c);
  int a[d][c];
  for(int i=0;i<d;i++){
   for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
   }
   printf("\n");
  }
  int b[c][d];
  for(int i=0;i<d;i++){
   for(int j=0;j<c;j++){
     b[j][i]=a[i][j];
   }
  }
  for(int i=0;i<c;i++){
   for(int j=0;j<d;j++){
     printf("%d ",b[i][j]);
   }
   printf("\n");
  }
}