#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char a[50];
    gets(a);
    for(int i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
    }
    char *token=strtok(a," ");
    char b[50][50];
    int d=0;
    while(token!=NULL){
      strcpy(b[d],token);
      token=strtok(NULL," ");
      d++;
    }
    char cp[50];
    int k=0;
    for(int i=0;i<d-1;i++){
       cp[k]=b[i][0];
       k++;
    }
    printf("%s",cp);
    printf("%s",b[d-1]);
    printf("@ptit.edu.vn");
}