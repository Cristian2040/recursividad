#include <stdio.h>

//long long factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    return n * factorial(n - 1);
//}

int factorial(int i, int resultado, int num){
    if(i > num){
        return resultado;
    }

    resultado *= i;

    factorial(i+1, resultado, num);
}

int main() {
    long int num = 5;
    printf("El factorial de %d es: %d\n", num, factorial(1, 1, num));
    return 0;
}