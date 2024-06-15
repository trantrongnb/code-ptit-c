#include<stdio.h>
#include<string.h>
 void swap(int *a,int *b){
    int s=*a;
    *a=*b;
    *b=s;
 }
int main(){
  int n;scanf("%d",&n);
  int a[2*n+1];
  for(int i=1;i<=2*n;i++) scanf("%d",&a[i]);
  int b[n];
  int d=0;
  for(int i=1;i<=2*n;i+=2){
    b[d]=a[i];
    d++;
  }
    for(int i=0;i<d;i++){
        for(int j=i+1;j<d;j++){
            if(b[i]>b[j]){
                swap(&b[i],&b[j]);
            }
        }
    }
    int s=0;
    for(int j=0;j<d;j++){
        for(int i=1;i<=2*n;i+=2){
            if(b[j]==a[i]){
               if(a[i]>=s){
                s=a[i]+a[i+1];
               } else {
                s=s+a[i+1];
               }
               break;
            }
        }
    }
    printf("%d",s);
}