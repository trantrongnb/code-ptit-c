#include<stdio.h>
int main(){
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(a[i]>=a[j]){
            int d=a[i];
            a[i]=a[j];
            a[j]=d;
         }
      }
   }
   printf("%d ",a[0]);
   for(int i=0;i<n;i++){
      if(a[i]!=a[0]){
         printf("%d",a[i]);
         break;
      }
   }
}