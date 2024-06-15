#include<stdio.h>
#include<string.h>
#include<math.h>
int nt(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int ntd(int n){
    while(n!=0){
        if(nt(n%10)!=1){
            return 0;
        }
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
            if(nt(i)==1&&ntd(i)==1){
                d++;
            }
        }
        printf("%d\n",d);
    }
 }