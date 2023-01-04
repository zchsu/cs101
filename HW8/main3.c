#include<stdio.h>

void get_binary(int n) {
    
    int i=0, a[32];
    while (n > 0) {
        a[i] = n % 2;   
        i = i + 1;
        n = n / 2;
    }
    for(int f=31; f>i-1; f--) {
        printf("0");
        if(f % 4 == 0 ) {
            printf(" ");
        }
    }
    for(i=i-1; i >= 0; i--) {
        printf("%d", a[i]);
        if(i % 4 == 0 ) {
            printf(" ");
        }
    }
}
int main() {
    int n = 255;
    get_binary(n);
    return 0;
}
