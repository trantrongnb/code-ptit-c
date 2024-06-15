#include<stdio.h>
#include<math.h>
void xuli(int n){
    int d;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
             d=0;
            while(n%i==0){
            d++;
            n/=i;
            }
            printf("%d(%d) ",i,d);
        }
    }
    if(n!=1){
        printf("%d(1)",n);
    }
}
int main(){
    int t;scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;scanf("%d",&n);
        printf("Test %d: ",i);        xuli(n);
        printf("\n");
    }
}