#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char s[20];
    scanf("%s",s);
    int a[11];
    for(int i=0;i<11;i++){
        a[i]=0;
    }
    for(int i=0;i<strlen(s);i++){
        switch ((int)s[i]-'0')
          {
            case 2:
             a[(int)s[i]-'0']++;
             break;
             case 3:
             a[(int)s[i]-'0']++;
             break;
             case 5:
             a[(int)s[i]-'0']++;
             break;
             case 7:
             a[(int)s[i]-'0']++;
             break;   
          }
}
for(int i=0;i<strlen(s);i++){
    if(a[(int)s[i]-'0']!=0){
        printf("%d %d\n",(int)s[i]-'0',a[(int)s[i]-'0']);
        a[(int)s[i]-'0']=0;
    }
}
}