#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<sqrt(n);i++)
    if(n%i==0) return 0;
    return 1;
}
void solve(){
   char a[501];scanf("%s",a);
   int s=strlen(a)-1;
    bool check =true;
   for(int i=0;i<=s;i++){
     if(a[i]!=a[s]){
        check=false;
        break;
     }
     if(nt(a[i]-'0')==0||nt(a[s]-'0')==0){
        check=false;
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