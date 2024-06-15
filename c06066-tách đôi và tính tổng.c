#include<stdio.h>
#include<string.h>
char s[201];
void reverse(int a[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int d = a[l];
        a[l] = a[r];
        a[r] = d;
        l++, r--;
    }
}
void check(char a[], char b[]) {
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1 + 1];
    for (int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for (int i = 0; i < n2; i++) y[i] = b[i] - '0';
    reverse(x, n1);
    reverse(y, n2);
    for (int i = n2; i < n1; i++) y[i] = 0;
    int nho = 0, cmp = 0;
    for (int i = 0; i < n1; i++) {
        cmp = x[i] + y[i] + nho;
        z[n++] = cmp % 10;
        nho = cmp / 10;
    }
    if (nho > 0) z[n++] = nho;
    reverse(z,n);
    char tam[201];
    for(int i=0;i<n;i++){
        tam[i]=z[i]+'0';
    }
    tam[n]='\0';
    strcpy(s,tam);
    printf("%s\n",s);
}
void tong(char s[]) {
    int n = strlen(s) / 2;
    char a[201];char b[201];
    for (int i = 0;i < n; i++) a[i] = s[i];
    a[n]='\0';
    for (int i = n; i < strlen(s); i++) b[i - n] = s[i];
    b[strlen(s)-n]='\0';
    check(b, a);
}
int main() {
    scanf("%s", s);
    while(strlen(s)>1){
       tong(s);
    }
    return 0;
}
