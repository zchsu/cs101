#include <stdio.h>

void printspaces(int r, int rows) {
    for(int i=rows/2; i>=r; i--) {
        printf("  ");
    }
}
void printstars(int r) {
    for(int i=1; i<=r*2-1; i++){
        printf("* ");
    }
}
int main() {
    int rows = 10;
    int j = rows;
    for(int i=1; i<=rows/2;i++) {
        printspaces(i,j);
        printstars(i);
        printf("\n");
    }
    return 0;
}
