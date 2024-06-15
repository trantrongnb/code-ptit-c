#include<stdio.h>
int check(int n){
    int d=n%10;
    n/=10;
    while(n!=0){
        if(d>=n%10){
            return 0;
        }
        d=n%10;
        n/=10;
    }
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int a,b;scanf("%d%d",&a,&b);
        int d=0;
        for(int i=a;i<=b;i++){
            if(check(i)==1){
                d++;
            }
        }
        printf("%d\n",d);
    }
}