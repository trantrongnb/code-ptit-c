#include<stdio.h>
int main(){
  int a,b;scanf("%d%d",&a,&b);
  for(int i=1;i<=a;i++){
    int d=i;
    for(int j=1;j<=i-1;j++){
        printf("~");
    }
    if(d==1||d==a){
        for(int i=1;i<=b;i++){
            printf("*");
        }
    } else {
        printf("*");
        for(int i=2;i<=b-1;i++){
            printf(".");
        }
        printf("*");
    }
    printf("\n");
  }
}