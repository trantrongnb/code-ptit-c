#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2){
    return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
int n;scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 int cnt[1001];
 for(int i=0;i<1001;i++){
    cnt[i]=0;
 }
 for(int i=0;i<n;i++){
    cnt[a[i]]++;
 }
 int b[1001];
 int d=0;
 for(int i=0;i<n;i++){
    if(cnt[a[i]]!=0&&nt(a[i])==1){
        d++;
    }
 } printf("%d ",d);
 for(int i=0;i<n;i++){
    if(cnt[a[i]]!=0&&nt(a[i])==1){
        printf("%d ",a[i]);
    }
 }

}