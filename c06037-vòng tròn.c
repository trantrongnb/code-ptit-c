#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int dem = 0;
    scanf("%s", a);
    for(int i = 0; i < strlen(a); i++){
        for(int j = i + 1; j < strlen(a); j++){
            if(a[i] == a[j]){
                int s[26];
                for(int cnt = 0; cnt < 26; cnt++) s[cnt] = 0;
                for(int cnt = i + 1; cnt < j; cnt++){
                    s[a[cnt] - 'A']++;
                }
                for(int cnt = 0; cnt < 26; cnt++){
                    if(s[cnt] == 1) dem++;
                }
            }
        }
    }
    printf("%d", dem / 2);
    return 0;
}