#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    char *token=strtok(a," ");
    int d=0;
    char b[100][100];
    while(token!=NULL){
       strcpy(b[d++],token);
       token=strtok(NULL," ");
    }
     char s[100];
     gets(s);
    for(int i=0;i<d;i++){
       if(strcmp(b[i],s)!=0){
        printf("%s ",b[i]);
       }
    }
}