#include<stdio.h>
#include<math.h>
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[100001];
    for(int i=0;i<100001;i++){
      cnt[i]=0;
    }
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    } 
     for(int i=0;i<n;i++){
        if(cnt[a[i]]!=0){
         printf("%d %d\n",a[i],cnt[a[i]]);
         cnt[a[i]]=0;
        }
    }
}