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
                for(int j=i;j>=1;j--){
                    printf("%d",j);
                     k++;
                    if(k==c){
                        break;
                    }
                }
            } else {
                for(int j=c-1;j>=1;j--){
                    printf("%d",j);
                      k++;
                    if(k==c){
                        break;
                    }
                }
            }
        }
        printf("\n");
}
}