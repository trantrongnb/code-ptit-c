#include<stdio.h>
#include<math.h>
int main(){
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   int c;scanf("%d",&c);
   for(int i=c;i<n;i++){
    printf("%d ",a[i]);
   }
   for(int i=0;i<c;i++){
    printf("%d ",a[i]);
   }
}