#include<stdio.h>
#include<string.h>
void reverse(int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int d=a[l];
        a[l]=a[r];
        a[r]=d;
        l++,r--;
    }
}
void check(char a[],char b[]){
    int n1=strlen(a),n2=strlen(b),n=0;
    int x[n1],y[n1],z[n1+1];
    for(int i=0;i<n1;i++) x[i]=a[i]-'0';
    for(int i=0;i<n2;i++) y[i]=b[i]-'0';
    reverse(x,n1);
    reverse(y,n2);
    for(int i=n2;i<n1;i++) y[i]=0;
    int nho=0,cmp=0;
    for(int i=0;i<n1;i++){
      cmp=x[i]+y[i]+nho;
      z[n++]=cmp%10;
      nho=cmp/10;
    }
    if(nho>0) z[n++]=nho;
    for(int i=n-1;i>=0;i--){
        printf("%d",z[i]);
    }
}
int main(){
    int t;scanf("%d",&t);
    getchar();
    while(t--){
    char a[501],b[501];
    gets(a);gets(b);
    if(strlen(a)<strlen(b)){
        check(b,a);
    }
    else {
        check(a,b);
    }
    printf("\n");
    }
}