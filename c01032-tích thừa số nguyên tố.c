#include<stdio.h>
#include<math.h>
void xuli(int n){
     int s=1;
     for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            s=s*i;
            while(n%i==0){
                n/=i;
            }
        }
     }
     if(n!=1){
        s=s*n;
     }
     printf("%d\n",s);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        xuli(n);
    }
}