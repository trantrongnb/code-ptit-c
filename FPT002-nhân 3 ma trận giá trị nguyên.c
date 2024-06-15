#include<stdio.h>
int main(){
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m+1][n+1],b[n+1][p+1],c[p+1][q+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++){
            scanf("%d",&b[i][j]);
        }
    }
     for(int i=1;i<=p;i++){
         for(int j=1;j<=q;j++){
             scanf("%d",&c[i][j]);
         }
     }
    int t1[m+1][p+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=p;j++){
            int s=0;
            for(int k=1;k<=n;k++){
                s+=a[i][k]*b[k][j];
            } 
            t1[i][j]=s;
        }
    }
    int t2[m+1][q+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=q;j++){
            int s=0;
            for(int k=1;k<=p;k++){
                s+=t1[i][k]*c[k][j];
            }
            t2[i][j]=s;
        }
    }
     for(int i=1;i<=m;i++){
        for(int j=1;j<=q;j++){
            printf("%d ",t2[i][j]);
        }
        printf("\n");
     }
}