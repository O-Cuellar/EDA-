/*O que faz a função:
int f(int a, int b) {
    if (b == 0) 
    return a;  // Caso base: quando b é 0, o MDC é 'a'
else 
    return f(b, a % b);  // Recursivamente chama a função com 'b' e 'a % b'
}
E provar que funciona em um caso real*/

#include <stdio.h>

// Função recursiva para calcular o MDC usando o Algoritmo de Euclides
int mdc(int a, int b) {
    if (b == 0) {
        return a;  // Quando b é zero, o MDC é a
    } else {
        return mdc(b, a % b);  // Recursão com b e o resto da divisão de a por b
    }
}

int main() {
    int a, b;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Chama a função mdc e exibe o resultado
    printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));

    return 0;
}
// A função mdc calcula o MDC (Máximo Divisor Comum) de dois números inteiros 'a' e 'b' usando o Algoritmo de Euclides.