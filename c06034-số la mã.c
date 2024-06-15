#include<stdio.h>
#include<string.h>
int xuli(char a[]){
    int b[100];int cnt=0;
    for(int i=0;i<strlen(a);i++){
        switch (a[i]){
            case 'I':
            b[cnt]=1;cnt++;break;
            case 'V':
            b[cnt]=5;cnt++;break;
            case 'X':
            b[cnt]=10;cnt++;break;
            case 'L':
            b[cnt]=50;cnt++;break;
            case 'C':
            b[cnt]=100;cnt++;break;
            case 'D':
            b[cnt]=500;cnt++;break;
            case 'M':
            b[cnt]=1000;cnt++;break;
        }
    } int s=b[cnt-1];
    for(int i=cnt-1;i>=1;i--){
        if(b[i]>b[i-1]){
            s=s-b[i-1];
        } else{
            s=s+b[i-1];
    }
}
 return s;
}
int main(){
    int t;scanf("%d",&t);
    getchar();
    while(t--){
        char a[100];
        scanf("%s",a);
       printf("%d\n", xuli(a));
    }
}