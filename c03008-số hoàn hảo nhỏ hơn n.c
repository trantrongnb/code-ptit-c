#include<stdio.h>
#include<math.h>
void xuli(int n){
    int s=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            s+=i;
        }
        if(n%(n/i)==0&&i*i!=n){
            s+=n/i;
        }
    }
    if(n==s){
        printf("%d ",n);
    }
}
 int main(){
    int n;scanf("%d",&n);
   for(int i=2;i<=n;i++){
    xuli(i);
   }
 }