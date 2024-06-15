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
void ou(int n){
    int s=2,d=1;
    while(d<=n){
        if(nt(s)==1){
            printf("%d\n",s);
            d++;
        }
        s++;
    }
}
int main(){
    int n;scanf("%d",&n);
    ou(n);
}