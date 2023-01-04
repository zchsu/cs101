#include<stdio.h>
void binary(int n) {
    
    int i=0, a[32];
    while (n > 0) {
        a[i] = n % 2;   
        i = i + 1;
        n = n / 2;
    }
    for(int f=4; f>i%4 && i%4!=0; f--) {
        printf("0");
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
    binary(n);
    return 0;
}
