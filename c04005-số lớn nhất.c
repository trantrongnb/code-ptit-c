#include<stdio.h>
#include<math.h>
void   xuli(int a[101],int n){
    int s=a[0];
    for(int i=0;i<n;i++){
        if(s<=a[i]){
            s=a[i];
        }
    }
    printf("%d\n",s);
    for(int i=0;i<n;i++){
        if(a[i]==s){
            printf("%d ",i);
        }
    }
}
int main(){
        int t;scanf("%d",&t);
        while(t--){
            int n;scanf("%d",&n);
            int a[101];
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
            xuli(a,n);
            printf("\n");
        }
    }
