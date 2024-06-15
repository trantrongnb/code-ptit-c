#include<stdio.h>
#define max 100000
int a[max]={0};
int sum(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    if(s%5==0) return 1;
    return 0;
}
void sang(){
    a[0]=a[1]=1;
    for(int i=2;i*i<=max;i++){
        if(a[i]==0){
            for(int j=i*i;j<=max;j+=i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sang();
    int n;scanf("%d",&n);
    int d=0;
    for(int i=2;i<=n;i++){
        if(a[i]==0&&sum(i)==1){
            d++;
            printf("%d ",i);
        }
    }
    printf("\n%d",d);
}