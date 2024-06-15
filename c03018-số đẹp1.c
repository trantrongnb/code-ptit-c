#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int sum(int n){
    int s=0;
    while(n!=0){
    s+=n%10;
    n/=10;
    }
    return s;
}
int fibo(int n){
    int a=0,b=1;
    while(b<n){
        if(n==a+b){
            return 1;
        }
        int t=a;
        a=b;
        b=t+b;
    }
    return 0;
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    if(a>=b){
        int d=a;
        a=b;
        b=d;
    }
    for(int i=a;i<=b;i++){
        if(nt(i)==1&&fibo(sum(i))==1){
            printf("%d ",i);
        }
    }
}