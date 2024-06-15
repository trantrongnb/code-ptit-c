#include<stdio.h>
struct pokemon{
    char ten[100];
    int cau,cung;
} a[100];
void nhap(int n){
    for(int i=1;i<=n;i++){
        getchar();
        gets(a[i].ten);
        scanf("%d%d",&a[i].cau,&a[i].cung);
    }
}
void xuli(int n){
    int s=0,cmp=0,cnt;
    for(int i=1;i<=n;i++){
        int d=0;
    if(a[i].cung>=a[i].cau){
        while(a[i].cung>=a[i].cau){
            s++;
            a[i].cung=a[i].cung-a[i].cau+2;
            d++;
        }
    }
     if(d>cmp){
        cmp=d;
        cnt=i;

        }
    }
    printf("%d\n",s);
    printf("%s",a[cnt].ten);

}
int main(){
    int n;scanf("%d",&n);
    nhap(n);
    xuli(n);
}