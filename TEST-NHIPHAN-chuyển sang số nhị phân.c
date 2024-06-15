#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[100];
    int i=0;
    if(n==0){
        printf("%d",n);
        return 0;
    }
    while(n!=0){
        int t=n%10;
        a[i]=t%2;
        i++;
        n/=2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}