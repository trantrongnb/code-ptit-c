#include<stdio.h>
int check(int n){
    int d=n%10;
    n/=10;
    while(n!=0){
        if(n%10>d) return 0;
        d=n%10;
        n/=10;
    }
    return 1;
}
void swap(int *a,int*b){
    int d=*a;
    *a=*b;
    *b=d;
}
int nhap(int a[],int cout,int n){
    for(int i=0;i<cout;i++){
        if(a[i]==n) return i;
    }
    return -1;
}
void sort(int a[],int b[],int cout){
    for(int i=0;i<cout;i++){
        for(int j=i+1;j<cout;j++){
            if(b[i]<b[j]){
                swap(&a[i],&a[j]);
                swap(&b[i],&b[j]);
            }
        }
    }
}
void display(int a[],int b[],int cout){
    for(int i=0;i<cout;i++){
        printf("%d %d\n",a[i],b[i]);
    }
}
int main(){
    int n;
    int a[10000],b[10000],cout=0;
    while(scanf("%d",&n)==1){
        if(check(n)==1){
          int vt= nhap(a,cout,n);
          if(vt==-1){
            a[cout]=n;
            b[cout]=1;
            cout++;
          } else {
             b[vt]++;
          }
        }
    }
     sort(a,b,cout);
     display(a,b,cout);
}