#include<stdio.h>
int main(){
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(a[i]>a[j]){
            int d=a[i];
            a[i]=a[j];
            a[j]=d;
         }
      }
   }
   int p[n],k=0,d=0;
   for(int i=0;i<n;i++){
      if(a[i]==a[i+1]){
         d++;
         p[k]=a[i];
         while(a[i]==a[i+1]){
            i++;
         }
         k++;
      }
   }
   printf("%d\n",d);
   for(int i=0;i<k;i++){
      printf("%d ",p[i]);
   }
}