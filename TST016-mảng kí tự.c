#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    int one=0,two=0,three=0,four=0,five=0;
    for(int i=0;i<strlen(a);i++){
        switch (a[i])
        {
            case '(':case ')':
            one++;
            break;
            case '[':case ']':
            two++;
            break;
            case '{':case '}':
            three++;
            break;
            case '\'':
            four++;
            break;
            case '"':
            five++;
            break;
        }
    }
    if(one%2==0&&two%2==0&&three%2==0&&five%2==0){
        printf("1");
    } else {
        printf("0");
    }
}