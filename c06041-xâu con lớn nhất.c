#include<stdio.h>
#include<string.h>

int main() {
    char s[100001];
    scanf("%s", s); 
    int cnt=0;
     while(cnt<=strlen(s)-1){
    char a = s[cnt];
    for (int i = cnt; i < strlen(s); i++) {
        if (s[i] > a) a = s[i];
    }
    for (int i = cnt; i < strlen(s); i++) {
        if (s[i] == a) {
            printf("%c", s[i]);
            cnt = i+1;
        }
    }
}
}