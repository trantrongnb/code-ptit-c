#include<stdio.h>
int main(){
 int d,c;scanf("%d%d",&d,&c);
 int s=d;
 if(d<c){
    s=c;
 }
 for(int i=0;i<=d-1;i++){
    int k=0;
    for(int j=s-i;j>=1;j--){
        printf("%d",j);
        k++;
        if(k==c){
            break;
        }
    }
    if(k<c){
      for(int i=2;i<=c;i++){
        printf("%d",i);
        k++;
        if(k==c){
            break;
        }
      }
    }
    printf("\n");
 }
}