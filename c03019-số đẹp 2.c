#include<stdio.h>
#include<math.h>
int check(int n){
    int s1=0,s2=0,d=n;
    while(n!=0){
        s2+=n%10;
        s1=s1*10+n%10;
        n/=10;
    }
    if(s2%10!=0||s1!=d) return 0;
    return 1;
}
void dep(int a,int b){
    int d=0;
    for(int i=a;i<=b;i++){
        if(check(i)==1){
            d++;
        }
    }
    printf("%d\n",d);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a=pow(10,n-1)+1;
        int b=pow(10,n)-1;
        dep(a,b);
    }
}