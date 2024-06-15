#include<stdio.h>
#include<math.h>
int  max(int a,int b){
    if(a>=b){
      return a;
    }
    return b;
}
int main(){
    int t;scanf("%d",&t);
    for(int cmt=1;cmt<=t;cmt++){
    int n;scanf("%d",&n);
    int a[n],s=0;
   int  k=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++){
        int d=0,k=i;
        while(a[k]>a[k-1]&&k>=1){
            d++;
            k--;
        }
         s=max(s,d);
    }
    int d=1;
    k=0;
    printf("Test %d:\n",cmt);
    printf("%d\n",s+1);
    for(int i=1;i<n;i++){
        d=0;
        k=i;
       while(a[k]>a[k-1]&&k>=1){
        d++;
        if(d==s){
            for(int j=i-s;j<=i;j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
        k--;
       }
    }
    }
}