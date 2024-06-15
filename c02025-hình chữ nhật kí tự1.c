#include<stdio.h>
int main(){
 int d,c;scanf("%d%d",&d,&c);
 int t=c;
 for(int i=1;i<=d;i++){
    int k=0;
    int j=i;
    for( j=i;j<=c;j++){
        printf("%c",j+63);
        k++;
    }
    if(k<c){
        if(k==0){
        while(k<c){
            printf("%c",63+c);
            k++;
        }
        } else {
            while(k<c){
                printf("%c",63+j-1);
                k++;
            }
        }
    }
    printf("\n");
 }
}