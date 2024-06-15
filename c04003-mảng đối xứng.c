#include<stdio.h>
#include<math.h>
int  xuli(int a[101],int n){
    int d=0;
    while(d<=n-1){
        if(a[d]!=a[n-1]){
            return 0;
        }
        d++;
        n--;
    }
   return 1;

}
int main(){
        int t;scanf("%d",&t);
        while(t--){
            int n;scanf("%d",&n);
            int a[101];
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
           if(xuli(a,n)){
            printf("YES\n");
           } else {
            printf("NO\n");
           }
        }
    }
