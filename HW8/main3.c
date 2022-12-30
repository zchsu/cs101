#include <stdio.h>

void get_binary(int n) {
    
    if(n >= 2)  
        get_binary(n/2);  
        printf("%d",n % 2);  
}
int main() {
    int n = 255;
    get_binary(n);
    
    return 0;
}
