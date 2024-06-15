#include<stdio.h>
void check(int a[],int n){
    for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if(a[i]==a[j]){
                    printf("%d\n",a[i]);
                    return;
                }
            }
        }
        printf("NO\n");
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        check(a,n);
    }
}