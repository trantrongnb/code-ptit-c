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
    int n;scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(strong(i)==i){
            printf("%d ",i);
        }
    }
}