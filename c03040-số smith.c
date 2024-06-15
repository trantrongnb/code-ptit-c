#include<stdio.h>
#include<math.h>
int sum(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int tsum(int n){
 int s1=sum(n);
 int s=0;
 for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        while(n%i==0){
     s+=sum(i);
     n/=i;
    }
 }}
 if(n!=1){
    s+=sum(n);
 }
 if(s1==s){
    return 1;
 }
 return 0;
}
int main(){
        int n;scanf("%d",&n);
        if(tsum(n)==1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
