#include <stdio.h>

void decimalABinario(int n) {
    if (n == 0) {
        return;
    }
    decimalABinario(n / 2); // Llamada recursiva dividiendo el número por 2
    printf("%d", n % 2); // Imprimir el residuo (0 o 1)
}

int main() {
    int num= -35;
    
    if (num < 0) {
        printf("Error: El número no puede ser negativo.\n");
    } else {
        printf("La representación binaria de %d es: ", num);
        decimalABinario(num);
        printf("\n");
    }
    
    return 0;
}