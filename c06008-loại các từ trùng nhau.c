#include<stdio.h>
#include<string.h>
int sum(char b[100]){
    int s=0;
    for(int i=0;i<strlen(b);i++){
        s+=(int)b[i];
    }
    return s;
}
int main(){
    char a[100];
    gets(a);
    char *token=strtok(a," ");
    int d=0;
    int s[1000001];
    for(int i=0;i<100001;i++){
        s[i]=0;
    }
    char b[100][100];
    while(token!=NULL){
        strcpy(b[d++],token);
        token=strtok(NULL," ");
    }
    for(int i=0;i<d;i++){
        s[sum(b[i])]++;
    }
    for(int i=0;i<d;i++){
        if(s[sum(b[i])]!=0){
            printf("%s ",b[i]);
            s[sum(b[i])]=0;
        }
    }
}