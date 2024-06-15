#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int c[n],l[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    } int m=0,k=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c[m]=a[i];
            m++;
        } else {
            l[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<m;i++){
        printf("%d ",c[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d ",l[i]);
    }
}