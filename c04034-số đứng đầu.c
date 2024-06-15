#include<stdio.h>
#include<math.h>
int  xuli(int j,int a[100],int n){
   for(int i=j+1;i<n;i++){
      if(a[j]<=a[i]){
         return 0;
      }
   }
   return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
      int n;scanf("%d",&n);
      int a[1000];
      int k=0;
      int cp[100];
      for(int i=0;i<n;i++) scanf("%d",&a[i]);
      for(int i=0;i<n;i++){
         if(xuli(i,a,n)==1){
            cp[k]=a[i];
            k++;
         }
      }
for(int i=0;i<k-1;i++){
   for(int j=i+1;j<k;j++){
      if(cp[i]<cp[j]){
         int d=cp[i];
         cp[i]=cp[j];
         cp[j]=d;
      }
   }
}
for(int i=0;i<k;i++){
   printf("%d ",cp[i]);
}
printf("\n");
}
}