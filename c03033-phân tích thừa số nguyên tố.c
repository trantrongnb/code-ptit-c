#include<stdio.h>
#include<math.h>
void xuli(int n){ int s=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            s++;
            int d=0;
            while(n%i==0){
                d++;
                n/=i;
            }
            if(s==1){printf("%d^%d ",i,d);}
            else {
                printf("* %d^%d ",i,d);
            }
        }
    }
    if(n!=1){
        printf("* %d^1",n);
    }
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        printf("%d = ",n);
        xuli(n);
        printf("\n");
    }
}