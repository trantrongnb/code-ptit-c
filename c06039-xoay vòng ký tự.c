#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}
int check(char a[][52], int n) {
    for (int i = 0; i < n; i++) {
        qsort(a[i], strlen(a[i]), sizeof(char), cmp);
    }
    for (int i = 1; i < n; i++) {
        if (strcmp(a[0], a[i]) != 0) return 0;
    }
    
    return 1;
}
int xem(char s[],char b[][52],int n,int i){
    int cnt=0;
    for(int j=0;j<n;j++){
            while(strcmp(s,b[j])!=0){
                int d=strlen(b[j])-1;
                char m=b[j][0];
                for(int x=1;x<=d;x++){
                    b[j][x-1]=b[j][x];
                }
                b[j][d]=m;
                cnt++;
            }
        }
     return cnt;
}
int main() {
    int n;
    scanf("%d", &n);
    char a[n][52];
    char b[n][52]; 
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
        strcpy(b[i], a[i]); 
    }
    int min=1000;
   if(check(b,n)==0){
    printf("-1");
    return 0;
   } else {
    for(int i=0;i<n;i++){
        int cnt=0;
        char s[100];
        strcpy(s,a[i]);
         for (int i = 0; i < n; i++) {
        strcpy(b[i], a[i]); 
    }
    int t=xem(s,b,n,i);
       if(t<min){
        min=t;
       }
    }
   }
   printf("%d",min);
}