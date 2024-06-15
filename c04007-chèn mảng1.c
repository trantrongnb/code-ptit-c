#include<stdio.h>
int main(){
   int m,n;scanf("%d%d",&m,&n);
   int a[100],b[100];
   for(int i=0;i<m;i++) scanf("%d",&a[i]);
   for(int i=0;i<n;i++) scanf("%d",&b[i]);
   int k;scanf("%d",&k);
   int s[200];
   int d=0;
   for(int i=0;i<k;i++){
      s[d]=a[i];
      d++;
   }
   for(int i=0;i<n;i++){
      s[d]=b[i];
      d++;
   }
   for(int i=k;i<m;i++){
      s[d]=a[i];
      d++;
   }
   for(int i=0;i<m+n;i++){
      printf("%d ",s[i]);
   }
}