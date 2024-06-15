#include<stdio.h>
int main(){
    int n, m, k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    int a[m];
    for(int i = 0; i < m; i++) 
        scanf("%d", &a[i]);
    int s[n+1];
    for(int i = 0; i <= n; i++) 
        s[i] = -1;
    for(int i = 0; i < m; i++) 
        s[a[i]] = 0;
    for(int i = 0; i < m; i++) {
        for(int l = a[i] - k; l <= a[i] + k; l++) {
            if(l >= 0 && l <= n) 
                s[l] = 0;
        }
    }
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(s[i] == -1) {
            for(int j = i; j <= i + 2*k; j++) {
                if(j >= 0 && j <= n && s[j] != 0) 
                    s[j] = 0;
            }
            i += 2*k;
            count++;
        }
    }
    printf("%d", count);
}