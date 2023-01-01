#include <stdio.h>

int main() {
    int i = 4;
    for(int x=i; x>=1; x--) {
        for(int y=x; y<i; y++) {
            printf(" ");
        }
        for(int z=1; z<=x*2-1; z++) {
        printf("*");
        }
        printf("\n");
    }
    for(int x=1; x<=i-1; x++) {
        for(int y=i-1; y>x; y--) {
            printf(" ");
        }
        for(int z=(x+1)*2-1; z>=1; z--) {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
