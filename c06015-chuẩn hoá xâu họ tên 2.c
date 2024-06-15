#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int t;scanf("%d",&t);
    getchar();
    while(t--){
    char a[100];
    gets(a);
    for(int i=0;i<strlen(a);i++){
       a[i]=tolower(a[i]);
    }
    char b[100][100];
    int d=0;
    char *token=strtok(a," ");
    while(token!=NULL){
        strcpy(b[d],token);
        token=strtok(NULL," ");
        d++;
    }
    for(int i=1;i<d;i++){
        b[i][0]=toupper(b[i][0]);
    }
    for(int i=0;i<strlen(b[0]);i++){
        b[0][i]=toupper(b[0][i]);
    }
    for(int i=1;i<d-1;i++){
        printf("%s ",b[i]);
    }
    printf("%s,",b[d-1]);
    printf(" %s",b[0]);
    printf("\n");
    }
}