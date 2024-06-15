#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
      if(i%2==1){
        int k=1,d=1;
        while(k<=i){
            printf("%d",d);
            d+=2;
            k++;
        }
      } else {
        int k=1,d=2;
        while(k<=i){
            printf("%d",d);
            d+=2;
            k++;
        }
      }
      printf("\n");
    }
}