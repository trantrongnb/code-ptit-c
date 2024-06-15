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
    } int d=0;
     for(int i=0;i<n;i++){
        if(cnt[a[i]]>1){
         d++;
         printf("%d ",a[i]);
         cnt[a[i]]=0;
        }
    }
    if(d==0){
        printf("0");
    }
}