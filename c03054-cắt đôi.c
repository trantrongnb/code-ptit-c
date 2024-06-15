#include<stdio.h>
#include<string.h>
void xuli(char a[20]){
    for(int i=0;i<strlen(a);i++)
    {
        switch ((int)a[i]-'0')
        {
            case 0: case 9:case 8:
            a[i]='0';
            break;
            case 1:
             a[i]='1';
            break;
            default:
            printf("INVALID\n");
            return ;
        }
    }
    int i=0;
    while(a[i]=='0'){
        i++;
    }
    if(i==strlen(a)){
      printf("INVALID\n");
            return ;
    }
   for(int j=i;j<strlen(a);j++){
    printf("%c",a[j]);
   }
   printf("\n");
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
    char a[20];scanf("%s",a);
    xuli(a);
}
}