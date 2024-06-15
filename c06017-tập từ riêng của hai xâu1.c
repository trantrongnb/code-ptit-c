#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void swap(char cp1[][100],int d){
    for(int i=0;i<d-1;i++){
        for(int j=i+1;j<d;j++){
            if(strcmp(cp1[i],cp1[j])>0){
                strcpy(cp1[d],cp1[i]);
                strcpy(cp1[i],cp1[j]);
                strcpy(cp1[j],cp1[d]);
            }
        }
    }
}
 void check(char cp1[][100],int j,char cp2[][100],int d){
    for(int i=0;i<d;i++){
        if(strcmp(cp1[j],cp2[i])==0){
            return;
        }
    }
    printf("%s ",cp1[j]);
 } 
int main(){
    char a[100];
    gets(a);
    char *token1=strtok(a," ");
    char cp1[100][100];
    int cnt1=0;
    while(token1!=NULL){
        strcpy(cp1[cnt1],token1);
        cnt1++;
        token1=strtok(NULL," ");
    }
    char b[100];
    gets(b);
    char *token2=strtok(b," ");
    char cp2[100][100];
    int cnt2=0;
    while(token2!=NULL){
        strcpy(cp2[cnt2],token2);
        cnt2++;
        token2=strtok(NULL," ");
    }
    swap(cp1,cnt1);
    for(int i=0;i<cnt1;i++){
        if(strcmp(cp1[i],cp1[i+1])==0){
            while(strcmp(cp1[i],cp1[i+1])==0){
                i++;
            }
        }
       check(cp1,i,cp2,cnt2);
    }
}