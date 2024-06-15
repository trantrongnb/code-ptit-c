#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef long long ll;
ll max(char a[]){
    ll sum=0;
    for(int i=0;i<strlen(a);i++){
        int t=(int)a[i]-'0';
        if(t==5){
           t=6;
        }
        sum=sum*10+t;
    }
    return sum;
}
ll min(char a[]){
    ll sum=0;
     for(int i=0;i<strlen(a);i++){
        int t=(int)a[i]-'0';
        if(t==6){
           t=5;
        }
        sum=sum*10+t;
    }
    return sum;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
    printf("%lld %lld\n",min(a)+min(b),max(a)+max(b));
}
}