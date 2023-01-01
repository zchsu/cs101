#include <stdio.h>

int main() {
    
    int a = -999;
    int sum = 0, n;
    
    if(a > 0) {
        while(a != 0) {
            n = a % 10;
            sum += n;
            a /= 10;
        }
        printf("%d", sum);
    } else if(a == 0) {
        printf("%d", a);
    } else {
        a = 0 - a;
        while(a > 10) {
            n = a % 10;
            sum += n;
            a /= 10;
        }
        n = a % 10;
        n = 0 - n;
        sum += n;
        printf("%d", sum);
    }
    return 0;
}
