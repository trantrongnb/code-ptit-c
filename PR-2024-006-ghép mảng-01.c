#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void tang(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
}
void giam(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
}
void solve(){
    int m,n;
    char kitu[2];
    scanf("%d%d",&m,&n);
    scanf("%s",kitu);
    int a[m],b[n];
    nhap(a,m);
    nhap(b,n);
    int s[m+n],d=0;
    for(int i=0;i<m;i++){
        s[d]=a[i];
        d++;
    }
    for(int i=0;i<n;i++){
        s[d]=b[i];
        d++;
    }
    if(kitu[0]=='T'){
        tang(s,d);
       // qsort(s,d,sizeof(int),tang);
        xuat(s,d);
        return;
    }
    if(kitu[0]=='G'){
        giam(s,d);
      //  qsort(s,d,sizeof(int),giam);
        xuat(s,d);
        return;
    }
    if(kitu[0]=='F'){
        xuat(a,m);xuat(b,n);
        return;
    }
    if(kitu[0]=='A'){
        xuat(b,n);xuat(a,m);
        return;
    }
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        solve();
        printf("\n");
    }
}