#include<stdio.h>
#include<math.h>
int check(int  s){
    int y=sqrt(s);
    if(y*y==s) return y;
    return 0;
}
void swap(int *a,int *b){
    int d=*a;
    *a=*b;
    *b=d;
}
int main(){
    int a1,b1,a2,b2,a3,b3;
    scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
    int s=a1*b1+a2*b2+a3*b3;
    int y=check(s);
    if(y==0){
        printf("NO\n");
    } else {
        if(a1>b1) swap(&a1,&b1);
        if(a2>b2) swap(&a2,&b2);
        if(a3>b3) swap(&a3,&b3);
        if(b1==b2&&b2==b3&&b3==y) printf("YES\n");
        else {
            if(b2>b1) {swap(&b2,&b1);swap(&a2,&a1);}
            if(b3>b1) {swap(&b3,&b1);swap(&a3,&a1);}
            if(b1==y){
            if(a2+a3==y||a2+b3==y||b2+a3==y||b2+b3==y){
                printf("YES\n");
            } else printf("NO\n");
            } else printf("NO");
        }
    }
}