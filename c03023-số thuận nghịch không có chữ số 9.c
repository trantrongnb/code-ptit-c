#include<stdio.h>
int check(int n){
    int s=0,d=n;
    while(n!=0){
        if(n%10==9) return 0;
        s=s*10+n%10;
        n/=10;
    }
    if(s==d) return 1;
    return 0;
}
int main(){
    int n;scanf("%d",&n);
    int d=0;
    for(int i=2;i<n;i++){
        if(check(i)==1){
            printf("%d ",i);
            d++;
        }
    }
    printf("\n%d",d);
}