#include<stdio.h>
void swap(int *a,int *b){
    int d;
    d=*a;
    *a=*b;
    *b=d;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int d=1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               swap(&a[i],&a[j]); 
            }
        }
        printf("Buoc %d: ",d);
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        d++;
    }
}