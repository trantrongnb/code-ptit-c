#include<stdio.h>
void swap( int *m,int *n){
    int d=*m;
    *m=*n;
    *n=d;
}
void xuli(int a[],int n){
    int k=1;
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>=a[j+1]){
                d++;
                swap(&a[j],&a[j+1]);
            }
        }
        if(d==0){
            break;
        }
        printf("Buoc %d: ",k);
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        k++;
    }
}
int main(){
    int n;
    scanf("%d" ,&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    xuli(a,n);
}