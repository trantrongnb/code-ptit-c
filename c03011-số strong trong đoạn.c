#include<stdio.h>
#include<math.h>
int gt(int n){
    int s=1;
    for(int i=2;i<=n;i++){
        s*=i;
    }
    return s;
}
int strong(int n){
    int s=0;
    while(n!=0){
        s+=gt(n%10);
        n/=10;
    }
    return s;
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    if(a>=b){
        int d=a;
        a=b;
        b=d;
    }
    for(int i=a;i<=b;i++){
        if(strong(i)==i){
            printf("%d ",i);
        }
    }
}