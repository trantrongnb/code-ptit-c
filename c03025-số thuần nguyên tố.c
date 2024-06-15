#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int tach(int n){
    int s=0,d=0;
    while(n!=0){
        d=n%10;
        if(d!=2&&d!=3&&d!=5&&d!=7){
            return 0;
        }
        s+=d;
        n/=10;
    }
    if(nt(s)==0) return 0;
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int a,b;scanf("%d%d",&a,&b);
        int d=0;
     for(int i=a;i<=b;i++){
     if(tach(i)==1){
        if(nt(i)==1){
            d++;
        }
     }
     }
     printf("%d\n",d);
    }
}