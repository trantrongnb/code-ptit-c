#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void solve(){
    char a[501];scanf("%s",a);
    int s=strlen(a)-1,t=0;
    bool check =true;
    if(a[0]!='8'||a[s]!='8'){
        check =false;
    } else {
    for(int i=0;i<=s;i++){
      if(a[i]!=a[s]){
        check=false ;
        break;
      }
      t+=(int)(a[i]-'0')+(int)(a[s]-'0');
      s--;
    }
    }
    if(check==true&&t%10==0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        solve();
    }
}