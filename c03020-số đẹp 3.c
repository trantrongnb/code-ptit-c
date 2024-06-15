#include<stdio.h>
#include<math.h>
int check(int n){
    int s1=0,s2=0,s=n,d=0;
    while(n!=0){
        if(n%10%6==0&&n%10!=0){
            d++;
        }
        s1=s1*10+n%10;
        s2=s2+n%10;
        n/=10;
    }
    if(d==0||s1!=s||s2%10!=8){
        return 0;
    }
    return 1;
}
int main(){
  int a,b;scanf("%d%d",&a,&b);
  if(a>b){
    int d=a;
    a=b;
    b=d;
  }   
  for(int i=a;i<=b;i++){
    if(check(i)==1){
        printf("%d ",i);
    }
  }
}