#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void check(){
    char a[81];
    gets(a);
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    int d=0;
    char*token=strtok(a," ");
    char b[20][20];
    while(token!=NULL){
        strcpy(b[d],token);
        d++;
        token=strtok(NULL," ");
    }
    for(int i=0;i<d;i++){
        b[i][0]=toupper(b[i][0]);
    }
    for(int i=0;i<d;i++){
        printf("%s ",b[i]);
    }
    printf("\n");
}
int main(){
    int t;scanf("%d",&t);
    getchar();
    while(t--){
        check();
    }
}