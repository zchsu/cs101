#include <stdio.h>

int get_digit(int n) {
    int sum = 0;
    while(n!=0) {
		sum =(sum * 10) + (n % 10);
		n = n / 10; 
	}
	return sum;
}
int main() {
    int n = 1234;
    int sum = get_digit(n);
    printf("sum = %d\n", sum);
    return 0;
}
