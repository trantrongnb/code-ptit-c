#include<stdio.h>
#include<string.h>
int lon(int a,int b){
    if(a<=b){
        return a;
    }
    return b;
}
int main(){
    int a,b,c;scanf("%d%d%d",&a,&b,&c);
   printf("%d", lon(lon(a,b),c));
}