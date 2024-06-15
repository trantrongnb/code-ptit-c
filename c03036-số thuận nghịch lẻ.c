#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(long long n){
    long long s=0;
    while(n!=0){
        if((n%10)%2==0){
            return 0;
        }
        s+=n%10;
        n/=10;
    }
    if(s%2==0){
        return 0;
    }
    return 1;
}
int tn(long long  n){
    long long d=n;
    long long s=0;
    while(n!=0){
   s=s*10+n%10;
   n/=10;
    }
    if(d==s){
        return 1;
    }
    return 0;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        long long  n;scanf("%lld",&n);
        if(tn(n)==1&&sum(n)==1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
}
}