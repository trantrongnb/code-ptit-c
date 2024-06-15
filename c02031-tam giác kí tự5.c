#include<stdio.h>
#include<string.h>
int main(){
   int n;scanf("%d",&n);
   int s=n;
   for(int i=1;i<=s;i++){
    for(int j=s-i;j<=s-i+n-1;j++){
        printf("%c",j+64);
    }
    n--;
    printf("\n");
   }
}