#include <stdio.h>

/* Implemente uma função recursiva para computar o valor de 2n O programa deve
solicitar o valor de n, uma sequência indeterminada de vezes, mostrando o valor
da potência a cada execução. O programa termina quando a potência informada
for negativa.*/


//Função recursiva para calcular 2^n
int potencia(int n) {
    if (n == 0) {
        return 1;
    }
    return 2 * potencia(n - 1);
}

int main() {
    int n;
    
    while (n >= 0) {
        printf("Digite um valor para n (negativo para encerrar): ");
        scanf("%d", &n);
        
        if (n < 0) {
            printf("Encerrando o programa...\n");
            break;
        }
        
        printf("2^%d = %d\n", n, potencia(n));
    }
    
    return 0;
}
