#include<stdio.h>
#include<math.h>
int sum(int n){
    int s1=0,s2=0,s=n;
    while(n!=0){
        if(n%10==4){
            return 0;
        }
        s1+=n%10;
        s2=10*s2+n%10;
        n/=10;
    }
    if(s1%10==0&&s==s2){
        return 1;
    }
    return 0;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
    int a=pow(10,n-1);
    int b=pow(10,n)-1;
    for(int i=a;i<=b;i++){
        if(sum(i)==1){
            printf("%d ",i);
        }
    }
     printf("\n");
    }
}