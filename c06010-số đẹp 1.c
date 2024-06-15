#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void solve(){
    char a[501];scanf("%s",a);
    int s=strlen(a)-1;
    bool check =true;
    for(int i=0;i<strlen(a);i++){
        if((int)a[i]%2==1||(int)a[s]%2==1){
            check =false;
            break;
        }
      if(a[i]!=a[s]){
        check=false ;
        break;
      }
      s--;
    }
    if(check==true){
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