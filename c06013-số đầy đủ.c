#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[]){
    int cnt[10]={0};
    if(a[0]=='0') return -1;
    for(int i=0;i<strlen(a);i++){
        if(a[i]<'0'||a[i]>'9') return -1;
       cnt[(int)a[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(cnt[i]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
   int t;scanf("%d",&t);
   getchar();
   while(t--){
    char a[1001];
    gets(a);
    if(check(a)==-1){
        printf("INVALID\n");
    } else {
        if(check(a)==0) printf("NO\n");
        else printf("YES\n");
    }
   }
}