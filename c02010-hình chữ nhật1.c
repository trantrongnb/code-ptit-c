#include<stdio.h>
int main(){
    int d,c;scanf("%d%d",&d,&c);
    for(int i=1;i<=d;i++){
        int k=0;
        for(int j=i;j<=c;j++){
            printf("%d",j);
            k++;
        }
        if(k<c){
            if(k==0){
                printf("%d",i);
                for(int i=c-1;i>=1;i--){
                    printf("%d",i);
                }
            } else {
            for(int i=c-k;i>=1;i--){
                printf("%d",i);
            }
        }
    }
    printf("\n");
}
}