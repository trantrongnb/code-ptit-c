#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
void check(int a[],int n){
    int m=100000001;
    int cnt=0;
    for(int i=1;i<n;i++){
      if(a[i]-a[i-1]<m){
        m=a[i]-a[i-1];
        cnt=1;
      } else {
        if(a[i]-a[i-1]==m){
            cnt++;
        }
      }
    }
    printf("%d %d\n",m,cnt);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        check(a,n);
    }
}