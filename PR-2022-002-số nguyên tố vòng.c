#include<stdio.h>
#include<string.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int find(char a[],int n){
    int sum=0;
    for(int i=n;i<strlen(a);i++){
        sum=sum*10+a[i]-'0';
    }
    for(int i=0;i<n;i++){
        sum=sum*10+a[i]-'0';
    }
    if(nt(sum)==1) return 1;
    return 0;
}
void check(){
    char a[100];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
       if(find(a,i)==0){
        printf("%d ",0);
        return;
       }
    }
   printf("%d ",1);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        check();
    }
}