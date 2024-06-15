#include<stdio.h>
#include<string.h>
int xuli(long long n){
    while(n!=0){
        if((n%10)%2==1){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
       long long a;scanf("%lld",&a);
if(xuli(a)==1){
    printf("YES\n");
} else {
    printf("NO\n");
}
           }

}