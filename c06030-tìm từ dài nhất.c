#include<stdio.h>
#include<string.h>
int check(char b[100][100],char s[100],int cout){
    for(int i=0;i<cout;i++){
        if(strcmp(s,b[i])==0) return i;
    }
    return -1;
}
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int main(){
    char s[100];
    char b[100][100];
    int cnt[100]={0};
    int cout=0,m;
    while(scanf("%s",s)!=-1){
       int vt=check(b,s,cout);
         if(vt==-1){
            strcpy(b[cout],s);
            cout++;
              m=max(m,strlen(s));
              cnt[cout]=1;
         } else {
            cnt[vt]++;
         }
    }
    for(int i=0;i<cout;i++){
        if(strlen(b[i])==m){
            printf("%s %d %d\n",b[i],m,cnt[i]);
        }
    }
}