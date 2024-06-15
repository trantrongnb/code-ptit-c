#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char a[200];
    gets(a);
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    char b[50][50];
    char *token=strtok(a," ");
    int d=0;
    while(token!=NULL){
        strcpy(b[d],token);
        d++;
        token=strtok(NULL," ");
    }
    char s[2]="00";
    for(int i=0;i<d;i++){
        int k=1;
        for(int j=i+1;j<d;j++){
            if(strcmp(b[i],b[j])==0&&strcmp(b[j],s)!=0&&strcmp(b[i],s)!=0){
                k++;
                strcpy(b[j],s);
            }
        }
        if(strcmp(b[i],s)!=0){
       printf("%s %d\n",b[i],k);
    }
}
}