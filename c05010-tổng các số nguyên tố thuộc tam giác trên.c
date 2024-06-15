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
   int m;scanf("%d",&m);
   int a[m+1][m+1];
   for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        scanf("%d",&a[i][j]);
    }
   }
   int s=0;
   for(int i=1;i<=m;i++){
    for(int j=i;j<=m;j++){
        if(nt(a[i][j])==1){
            s+=a[i][j];
        }
    }
   }
   printf("%d",s);
}
