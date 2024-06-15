#include<stdio.h>
int main(){
    int n ;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int x=a[i];
        int s=i-1;
        while(s>=0&&x<a[s]){
            a[s+1]=a[s];
            s--;
        }
        a[s+1]=x;
        printf("Buoc %d: ",i);
        for(int j=0;j<=i;j++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }
}