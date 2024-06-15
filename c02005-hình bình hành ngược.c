#include<stdio.h>
int main(){
   int a,b;scanf("%d%d",&a,&b);
   int d=a;
   while(d>=1){
    for(int i=d;i<=a-1;i++){
        printf("~");
    }
    for(int i=1;i<=b;i++){
        printf("*");
    }
    printf("\n");
    d--;
   }
}