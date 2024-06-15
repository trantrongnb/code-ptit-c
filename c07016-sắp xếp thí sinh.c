#include<stdio.h>
struct sinhvien{
    int id;
    char ten[100];
    char sinh[100];
    float m,n,p;
} a[100],cp;
void nhap(int n){
    for(int i=1;i<=n;i++){
        getchar();
        gets(a[i].ten);
        gets(a[i].sinh);
        scanf("%f%f%f",&a[i].m,&a[i].n,&a[i].p);
    }
}
void swap(struct sinhvien *a,struct sinhvien *b){
    cp=*a;
    *a=*b;
    *b=cp;
}
void xuli(int n){
    for(int i=1;i<=n;i++){
        a[i].id=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i].m+a[i].n+a[i].p<a[j].m+a[j].n+a[j].p){
             swap(&a[i],&a[j]);
            }
        }
    }
}
void xuat(int n){
    for(int i=1;i<=n;i++){
        float s=a[i].m+a[i].n+a[i].p;
        printf("%d %s %s %.1f\n",a[i].id,a[i].ten,a[i].sinh,s);
    }
}
int main(){
    int n;scanf("%d",&n);
    nhap(n);
    xuli(n);
  xuat(n);
  //printf("%d",a[1].id);
    
}