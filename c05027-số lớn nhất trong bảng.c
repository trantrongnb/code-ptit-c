// thuc chat bai toan nay la lay phan tu nho nhat cua chieu dai
// nhan voi phan tu nho nhat cua chieu rong
// boi vi muon no lon nhat thi no la giao cua nhieu nhat 
// cua cac hcn
// ma cac hinh chu nhat luon bat dau tu 11
// minh dung struct cho de luu cac bien
// ket qua don gian chi la tich cua hmin*cmin
#include<stdio.h>
struct luu{
    int a,b;
} s[101];
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&s[i].a,&s[i].b);
    }
    int h=s[1].a,c=s[2].b;
    for(int i=2;i<=n;i++) if(h>s[i].a) h=s[i].a;
    for(int i=2;i<=n;i++) if(c>s[i].b) c=s[i].b;
    printf("%lld",(long long)h*c);
}