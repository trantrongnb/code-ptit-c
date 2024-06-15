#include<stdio.h>
int main(){
   int a[31];
   a[0]=0;
   a[1]=1;
   for(int i=2;i<=31;i++){
    a[i]=a[i-1]+a[i-2];
   }
   int n;scanf("%d",&n);
   for(int i=0;i<=n-1;i++){
    printf("%d ",a[i]);
   }
}