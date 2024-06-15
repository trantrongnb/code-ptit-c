#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
   int a[21][21];
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        a[i][j]=0;
    }
   }
   int j=1,d=65,k=1;
   for(int cnt=1;cnt<=n;cnt++){
    for(int i=k;i<=n;i++){
        a[i][j]=d;
        d++;
    }
    k++,j++;
   }
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]!=0){
            printf("%c ",a[i][j]);
        }
    }
    printf("\n");
   }
}