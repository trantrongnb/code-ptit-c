#include<stdio.h>
#include<string.h>
int sum(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
 int main(){
    int a,b;scanf("%d%d",&a,&b);
    if(sum(a)<=sum(b)){
        printf("%d %d",a,b);
    } else {
        printf("%d %d",b,a);
    }
 }