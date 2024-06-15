#include<stdio.h>
int a[20][20]={0};
int main(){
    int t;scanf("%d",&t); 
    for(int cnt=1;cnt<=t;cnt++){
    int n ;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            a[j][i]=i;
        }
    }
   int b[n+1][n+1];
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        b[j][i]=a[i][j];
    }
   }
   int c[n+1][n+1];
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        int s=0;
        for(int k=1;k<=n;k++){
            s+=a[i][k]*b[k][j];
        }
        c[i][j]=s;
    }
   }
   printf("Test %d:\n",cnt);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
   }
   printf("\n");
}
}