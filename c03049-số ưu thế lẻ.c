#include<stdio.h>
#include<math.h>
int check(long long n){
    if(n%2==0){
        return 0;
    }
    int c=0,l=0;
    while(n!=0){
        if((n%10)%2==0){
            c++;
        } else {
            l++;
        }
        n/=10;
    }
    if(c<l){
        return 1;
    }
    return 0;
}
 int main(){
    int t;scanf("%d",&t);
    while(t--){
        long long n;scanf("%lld",&n);
        if(check(n)==1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
 }