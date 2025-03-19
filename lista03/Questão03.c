//Altere o programa anterior para resolver problemas com expoente negativo.

#include <stdio.h>

// Função recursiva para calcular x^y
double potencia(double x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y > 0) {
        return x * potencia(x, y - 1);
    }
    return 1 / x * potencia(x, y + 1);  // Expoente negativo
}

int main() {
    double x;
    int y;

    printf("Digite o valor da base: ");
    scanf("%lf", &x);
    printf("Digite o valor do expoente: ");
    scanf("%d", &y);

    if (x == 0 && y <= 0) {
        printf("Erro: Não é possível calcular 0^y quando y <= 0.\n");
    } else {
        double resultado = potencia(x, y);
        printf("%.2lf^%d = %1lf\n", x, y, resultado);
    }

    return 0;
}
