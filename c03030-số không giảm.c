#include<stdio.h>
#include<math.h>
int test(int n){
    int d=n%10;
    n/=10;
    while(n!=0){
        if(d<n%10){
            return 0;
        } else {
         d=n%10;
        }

        n/=10;
    }
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
   int a=pow(10,n-1)+1;
   int b=pow(10,n)-1;
   for(int i=a;i<=b;i++){
    if(test(i)==1){
        printf("%d ",i);
    }
   }
   printf("\n");

}
}