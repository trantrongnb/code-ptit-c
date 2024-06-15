#include<stdio.h>
#include<math.h>
int gt(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int main(){
    int n;scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("%d ",gt(i)/gt(j)/gt(i-j));
    }
    printf("\n");
   }
}