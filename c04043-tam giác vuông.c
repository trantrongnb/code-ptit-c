#include<stdio.h>
typedef long long ll;
void sort(ll a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                ll d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
}
int check(ll a[],int n){
    for(int i=2;i<n;i++){
         int l=0,r=i-1;
         for(int j=l;j<=r;j++){
            while(l<r){
             if(a[l]+a[r]==a[i]) return 1;
              if(a[l]+a[r]<a[i]) l++;
              else r--;
            }
         }
    }
    return 0;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        ll a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            a[i]=a[i]*a[i];
        }
        sort(a,n);
       if( check(a,n)==1){
        printf("YES\n");
       } else {
        printf("NO\n");
       }
    }
}