#include<stdio.h>
#include<math.h>
int main(){
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int d=a[i];
            a[i]=a[j];
            a[j]=d;
        }
    }
   }
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
}