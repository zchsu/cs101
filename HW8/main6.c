#include <stdio.h>

void roof_spaces(int r, int n) {
    for(int i=n; i>r; i--) {
        printf(" ");
    }
}
void roof_stars(int r) {
    for(int i=1; i<=r*2-1; i++){
        printf("*");
    }
}
void print_house(int n) {
    for(int i=1; i<=n+2; i++) {
        for(int j=1; j<=n*2-1; j++) {
            if(i==1 || i==n+2 || j==1 || j==n*2-1) {
               printf("*");
            } else {
               printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int n = 4;
    int j = n;
    for(int i=1; i<=n;i++) {
        roof_spaces(i,j);
        roof_stars(i);
        printf("\n");
    }
    print_house(j);
    return 0;
}
