#include<stdio.h>
int  xuli(int a[],int n){
    int d=0;
   for(int i=0;i<n;i++){
    if(a[i]==a[0]){
        d++;
    }
   }
   if(d==n/2){
    return 1;
   } else {
    d=0;
   }
   for(int i=0;i<n;i++){
    if(a[i]==a[1]){
        d++;
    }
}
if(d==n/2) return 1;
   return 0;
}
int main(){
    int n;scanf("%d",&n);
    int s=2*n-2;
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
  if( xuli(a,s)==1){
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}