#include <stdio.h>

void print_spaces(int r) {
    for(int i=3*2; i>=r; i--) {
        printf(" ");
    }
}
void print_stars(int r, int rows) {
    for(int i=1; i<=rows*2-1; i++) {
        printf("*");
    }
}
void print_top(int rows) {
    for(int r=1; r<=rows; r++) {
    print_spaces(r);
    print_stars(r,r);
    printf("\n");
    }
}
void print_truck(int truck){
    for (int i=1; i<=truck; i++){
        printf("      *\n");
    }
}
int main()
{
    int truck = 5;
    printf("  X‘mas tree!\n");
    for(int j=3; j<=7; j=j+2){
        print_top(j);
    }
    print_truck(truck);
    return 0;
}
