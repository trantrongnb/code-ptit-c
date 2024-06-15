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
  int c1,c2;scanf("%d%d",&c1,&c2);
  for(int i=1;i<=m;i++){
    s=a[i][c1];
    a[i][c1]=a[i][c2];
    a[i][c2]=s;
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}