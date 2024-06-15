#include<stdio.h>
int cnt1[1000];
int cnt2[1000];
void sang(){
    for(int i=0;i<1000;i++) cnt1[i]=0;
    for(int i=0;i<1000;i++) cnt2[i]=0;
}
void xuli(){
    int g[1000],ba[1000],ab[100],m=0,n=0,p=0;
    for(int i=0;i<1000;i++){
        if(cnt1[i]!=0&&cnt2[i]!=0){
            g[m]=i;
            m++;
        }
        if(cnt1[i]!=0&&cnt2[i]==0){
            ba[n]=i;
            n++;
        }
        if(cnt1[i]==0&&cnt2[i]!=0){
            ab[p]=i;
            p++;
        }
    }
    for(int i=0;i<m;i++) printf("%d ",g[i]);
    printf("\n");
    for(int i=0;i<n;i++) printf("%d ",ba[i]);
    printf("\n");
    for(int i=0;i<p;i++) printf("%d ",ab[i]);
    printf("\n");
}
int main(){
    sang();
   int m,n;scanf("%d%d",&m,&n);
   int a[m],b[n];
   for(int i=0;i<m;i++) scanf("%d",&a[i]);
   for(int i=0;i<n;i++) scanf("%d",&b[i]);
   for(int i=0;i<m;i++) cnt1[a[i]]++;
   for(int i=0;i<n;i++) cnt2[b[i]]++;
    xuli();
}