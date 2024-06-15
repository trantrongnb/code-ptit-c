#include<stdio.h>
void  xuli(int a,int b,int c,int d){
    int huyen=(c-a)*(c-a)+(d-b)*(d-b);
    int canh=(c-a)*(c-a);
    if(huyen/canh==2){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
 int main(){
    int t;scanf("%d",&t);
    while(t--){
        int a,b,c,d;scanf("%d%d%d%d",&a,&b,&c,&d);
        xuli(a,b,c,d);
    }
    printf("\n");
 }