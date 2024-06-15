#include<stdio.h>
#include<math.h>
void check(){
    int n;scanf("%d",&n);
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
       if(i%2==0) count++;
       if(n%(n/i)==0&&i*i!=n&&(n/i)%2==0) count++;
      }
    }
    printf("%d\n",count);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        check();
    }
}