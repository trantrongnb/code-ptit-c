#include<stdio.h>
#include<math.h>
int main(){
    int m,n;scanf("%d%d",&m,&n);
    int a[m+1][n+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
  int d1,d2;scanf("%d%d",&d1,&d2);
  for(int i=1;i<=n;i++){
    s=a[d1][i];
    a[d1][i]=a[d2][i];
    a[d2][i]=s;
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}