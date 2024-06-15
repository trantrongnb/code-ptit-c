#include<stdio.h>
struct dulieu{
    int id;
    char ten[100];
    char sinh[100];
    float m,n,p;
} a[100];
void nhap(int n){
    for(int i=1;i<=n;i++){
        getchar();
        gets(a[i].ten);
        gets(a[i].sinh);
        scanf("%f%f%f",&a[i].m,&a[i].n,&a[i].p);
    }
}
void xuli(int n){
    float max=0;
    for(int i=1;i<=n;i++){
     if(a[i].m+a[i].n+a[i].p>max){
        max=a[i].m+a[i].n+a[i].p;
     }
     a[i].id=i;
    }
    for(int i=1;i<=n;i++){
        if(max==a[i].m+a[i].n+a[i].p){
            printf("%d %s %s %.1f\n",a[i].id,a[i].ten,a[i].sinh,max);
        }
    }
}
int main(){
    int n;scanf("%d",&n);
    nhap(n);
    xuli(n);
}