#include<stdio.h>
#include<math.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[100001];
    for(int i=0;i<100000;i++){
      cnt[i]=0;
    }
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    } int d=0;
    for(int i=0;i<100000;i++){
        if(cnt[i]==1){
           d++;
        }
    }
    printf("%d\n",d);
     for(int i=0;i<100000;i++){
        if(cnt[i]==1){
           printf("%d ",i);
        }
    }
}