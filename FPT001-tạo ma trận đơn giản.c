#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
   for(int i=1;i<=n;i++){
    int k=0;
    for(int j=2;j<=i;j++){
        printf("0 ");
        k++;
    }
    for(int j=0;j<n;j++){
        if(k==n){
             break;}
    printf("%d ",j);
    k++;
   }
   printf("\n");
   }
}