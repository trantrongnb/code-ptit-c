#include<stdio.h>
#include<string.h>
int xuli(long long n){
   int a[20];
   int i=0;
   while(n!=0){
    a[i]=n%10;
    i++;
    n/=10;
   }
   if(a[0]/a[i-1]==2||a[i-1]/a[0]==2){
    int d=1;
    int c=i-2;
    while(d<=c){
        if(a[d]!=a[c]){
            return 0;
        }
        d++;c--;
    }
   } else {
    return 0;
   }
   return 1;
}
int main(){
   int t;scanf("%d",&t);
   while(t--){
    long long n;scanf("%lld",&n);
    if(xuli(n)==1){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
   }
}