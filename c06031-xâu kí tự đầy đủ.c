#include<stdio.h>
#include<string.h>
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int main(){
    char a[50];
    scanf("%s",a);
    int n=strlen(a);
    int l[n];
    for(int i=0;i<n;i++) l[i]=1;
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                l[i]=max(l[i],l[j]+1);
            }
        }
    }
    int m=0;
    for(int i=0;i<strlen(a);i++){
        m=max(m,l[i]);
    }
    printf("%d",26-m);
}