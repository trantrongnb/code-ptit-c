#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
 int n;scanf("%d",&n);
 int a[n+1][n+1];
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
    }
 } int d=0;
 for(int i=1;i<=n;i++){
    if(nt(a[n][i]==1)){
         d++;
    }
 }
 int vt=n;
 for(int i=n-1;i>=1;i--){
    int num=0;
    for(int j=1;j<=n;j++){
        if(nt(a[i][j])==1){
            num++;
        }
    }
    if(num>=d){
        d=num;
        vt=i;
    }
 }
 printf("%d\n",vt);
 for(int i=1;i<=n;i++){
    if(nt(a[vt][i])==1){
        printf("%d ",a[vt][i]);
    }
 }
}