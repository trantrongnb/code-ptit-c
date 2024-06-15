#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int n;scanf("%d",&n);
   int d=0;
   while(n!=0){
    d++;
    n/=10;
   }
   printf("%d",d);
}