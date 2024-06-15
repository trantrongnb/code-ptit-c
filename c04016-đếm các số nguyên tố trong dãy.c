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
    int t;scanf("%d",&t);
   for(int k=1;k<=t;k++){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
    int cnt[100001];
    for(int i=0;i<100001;i++){
      cnt[i]=0;
    }
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    }  printf("Test %d:\n",k);
     for(int i=0;i<n;i++){
        if(cnt[a[i]]!=0&&nt(a[i])==1){
         printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]);
         cnt[a[i]]=0;
        }
    }
}
}