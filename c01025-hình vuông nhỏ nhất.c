#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int a[9];
   for(int i=1;i<=8;i++) scanf("%d",&a[i]);
   int h=0;
   for(int i=1;i<=8;i+=2){
    for(int j=i+2;j<=8;j+=2){
       if(abs(a[i]-a[j])>h){
        h=abs(a[i]-a[j]);
       }
    }
   } int t=0;
   for(int i=2;i<=8;i+=2){
    for(int j=i+2;j<=8;j+=2){
       if(abs(a[i]-a[j])>t){
        t=abs(a[i]-a[j]);
       }
    }
   }
   if(t>h){
printf("%d",t*t);
   } else {
    printf("%d",h*h);
   }
   
}