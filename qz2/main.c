#include <stdio.h>

void print_spaces(int r) {
    for(int i = 0; i < r; i++) {
        printf("  ");
    }
}

void print_stars(int rows, int r) {
    for(int i = 0; i < 2*rows-(2*r+1); i++){
        printf("* ");
    }
}
int main() {
    
    int rows = 5;
    for (int r = 0; r < rows; r++) {
        print_spaces(r);
        print_stars(rows,r);
        printf("\n");
    }

    return 0;
}

