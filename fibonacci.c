#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 40;
    printf("La serie Fibonacci en la posición %d es: %d\n", num, fibonacci(num));
    return 0;
}

