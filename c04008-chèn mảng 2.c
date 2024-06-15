#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
   int t;scanf("%d",&t);
   for(int k=1;k<=t;k++){
    int n,m,d;scanf("%d%d%d",&n,&m,&d);
    int a[n],b[m];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    printf("Test %d:\n",k);
    int c[n+m];
    int cnt=0;
    for(int i=0;i<d;i++){
      c[cnt]=a[i];
      cnt++;
    }
    for(int i=0;i<m;i++){
      c[cnt]=b[i];
      cnt++;
    }
    for(int i=d;i<n;i++){
      c[cnt]=a[i];
      cnt++;
    }
    for(int i=0;i<cnt;i++){
      printf("%d ",c[i]);
    }
    printf("\n");
   }
}