#include <stdio.h>
int rows = 5;
void printSpaces(int r,int rows){
    for(int i=rows; i>r; i--){
        printf("  ");
    }
}

void printStars(int r){
    int i;
    for(int i=1; i<=r*2-1; i++){
        printf("* ");
    }
}

int main()
{
    int j = rows;
    for(int i = rows; i >= 1; --i){
        printSpaces(i,j);
        printStars(i);
        printf("\n");
    }

    return 0;
}


