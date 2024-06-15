#include<stdio.h>
#include<string.h>
int tangdan(char b[],int d){
    for(int i=0;i<d-1;i++){
        if((int)b[i]<=(int)b[i+1]){
            return 0;
        }
    }
    return 1;
}
int bangnhau(char b[],int d){
   for(int i=0;i<d-1;i++){
    if(b[i]!=b[i+1]){
        return 0;
    }
   }
   return 1;
}
int candoi(char b[],int d){
   if(b[0]!=b[1]) return 0;
   if(b[2]!=b[3]) return 0;
   if(b[3]!=b[4]) return 0;
   return 1;
}
int locphat(char b[],int d){
    for(int i=0;i<d;i++){
        if(b[i]!='6'&&b[i]!='8') return 0;

    }
    return 1;
}
int main(){
    int t;scanf("%d",&t);
    getchar();
    while(t--){
        char a[100];
        gets(a);
        char b[100];
        int d=0;
        for(int i=strlen(a)-1;i>=strlen(a)-6;i--){
            if(a[i]!='.'){
         b[d]=a[i];
         d++;
        }
        }
        if(tangdan(b,d)==1||bangnhau(b,d)==1||candoi(b,d)==1||locphat(b,d)==1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
}