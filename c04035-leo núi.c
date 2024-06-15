#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    return b;
}
int minlen(int a[],int n){
    int m=10000000;
    for(int i=1;i<=2*n;i+=2){
      m=min(m,a[i]);
    }
    return m;
}
int minxuong(int a[],int n){
    int m=1000000;
    for(int i=2;i<=2*n;i+=2){
        m=min(m,a[i]);
    }
    return m;
}
int main(){
    int n;scanf("%d",&n);
    int a[2*n+1];
    for(int i=1;i<=2*n;i++){
        scanf("%d",&a[i]);
    }
    int s1=0,s2=0;
    for(int i=1;i<=2*n;i+=2){
        s1+=a[i];
    }
    for(int i=2;i<=2*n;i+=2){
        s2+=a[i];
    }
    if(s1>=s2){
        printf("%d\n",s1+minxuong(a,n));
    } else {
        printf("%d\n",s2+minlen(a,n));
    }
}