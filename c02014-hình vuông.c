#include<stdio.h>
int main(){
  int n;scanf("%d",&n);
  int cnt=2*n-1;
  int a[cnt+1][cnt+1];
  int d=n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=cnt;j++){
      a[j][i]=d;
    }
    d--;
  } d=2;
  for(int i=n+1;i<=cnt;i++){
    for(int j=1;j<=cnt;j++){
      a[j][i]=d;
    }
    d++;
  }
  int l=2,r=cnt;
  for(int i=1;i<=n;i++){
   for(int j=l;j<=r;j++){
    a[i][j]=a[i][j-1];
   }
   l++;r--;}
   l=2;r=cnt;
  for(int i=cnt;i>n;i--){
    for(int j=l;j<=r;j++){
      a[i][j]=a[i][j-1];
    }
    l++;r--;
  }
  for(int i=1;i<=cnt;i++){
    for(int j=1;j<=cnt;j++){
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  }
