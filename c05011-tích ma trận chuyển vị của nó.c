#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int a[100][100];
int main(){
    int t;scanf("%d",&t);
    for(int cnt=1;cnt<=t;cnt++){
   int m,n;scanf("%d%d",&m,&n);
   int a[m+1][n+1];
   for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
    }
   }
   int b[n+1][m+1];
   for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        b[j][i]=a[i][j];
    }
   }
   int c[m+1][m+1];
   for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        int s=0;
        for(int k=1;k<=n;k++){
            s+=a[i][k]*b[k][j];
        }
         c[i][j]=s;
    }
   }
   printf("Test %d:\n",cnt);
   for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
       printf("%d ",c[i][j]); 
    }
    printf("\n");
   }
   printf("\n");
}
}