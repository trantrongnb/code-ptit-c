#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct sanpham{
    char ten[100];
    char nhom[100];
    float mua;
    float ban;
} a[100],cp;
void swap(struct sanpham*a,struct sanpham*b){
    cp=*a;
    *a=*b;
    *b=cp;
}
void nhap(int n){
    for(int i=1;i<=n;i++){
         getchar();
        gets(a[i].ten);
        gets(a[i].nhom);
        scanf("%f",&a[i].mua);
        scanf("%f",&a[i].ban);
    }
}
void xuli(int n){
    for(int i=1;i<=n;i++){
       a[i].mua=a[i].ban-a[i].mua;
       a[i].ban=i;
    }
    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        if(a[i].mua<a[j].mua){
            swap(&a[i],&a[j]);
        }
      }
    }
}
void in(int n){
    for(int i=1;i<=n;i++){
        printf("%.0f %s %s %.2f\n",a[i].ban,a[i].ten,a[i].nhom,a[i].mua);
    }
}
int main(){
   int n;scanf("%d",&n);
   nhap(n);
   xuli(n);
   in(n);
}