#include <stdio.h>

int count_one(int x) {
    int count = 0;
    while (x != 0) {
        count += x & 1;
        x = x >> 1;
    }
    return count;
}
int main() {
    int i = 15;
    int count = count_one(i);
    printf("(%d)有%d個1", i, count);
    
    return 0;
}
