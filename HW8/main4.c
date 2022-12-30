#include <stdio.h>

float round_func(float f) {
    f = f + 0.5;
    
    return f;
}
int main() {
    float f = 9.2344567789;
    int n = round_func(f);
    printf("%d", n);
    return 0;
}
