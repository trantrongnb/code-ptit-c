#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int tt(int n){
    int s=0,d=n;
    while(n!=0){
        s=s*10+n%10;
        n/=10;
    }
if(s==d){
    return 1;
}
return 0;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int a,b;scanf("%d%d",&a,&b);
        int d=0;
        for(int i=a;i<=b;i++){
            if(tt(i)==1){
                if(nt(i)==1){
                    printf("%d ",i);
                    d++;
                    if(d==10){
                        printf("\n");
                        d=0;
                    }
                }
            }
        }
      if(t>0){
        printf("\n");
        printf("\n");
      }
    }
}