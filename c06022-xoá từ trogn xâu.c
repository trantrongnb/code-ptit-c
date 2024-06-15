#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int  check(char cp[][50],int i,char b[]){
    char m[100],n[100];
    strcpy(m,cp[i]);
    for(int j=0;j<strlen(m);j++){
        m[j]=tolower(m[j]);
    }
    strcpy(n,b);
    for(int j=0;j<strlen(n);j++){
        n[j]=tolower(n[j]);
    }
    if(strcmp(m,n)==0) return 0;
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    getchar();
    for(int cnt=1;cnt<=t;cnt++){
        char a[201];
        gets(a);
        char b[25];
        gets(b);
        char cp[201][50];
        int d=0;
        char*token=strtok(a," ");
        while(token!=NULL){
            strcpy(cp[d],token);
            d++;
            token=strtok(NULL," ");
        } 
        printf("Test %d: ",cnt);
        for(int i=0;i<d;i++){
            if(check(cp,i,b)==1) printf("%s ",cp[i]);
        }
        printf("\n");
    }
}