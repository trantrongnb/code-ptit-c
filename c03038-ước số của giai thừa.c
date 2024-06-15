#include<stdio.h>
#include<math.h>
void check (int n,int p){
    int d=0;
    for(int i=1;i<=n;i++){
        int t=i;
        if(t%p==0){
            while(t%p==0){
                d++;
                t/=p;
            }
        }
    }
    printf("%d\n",d);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n,p;scanf("%d%d",&n,&p);
        check(n,p);
    }
}