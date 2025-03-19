/*Escreva um programa com uma função recursiva para calcular o valor de uma
base x elevada a um expoente y (positivo), sem usar operador de exponenciação.*/

#include <stdio.h>
#include <stdlib.h>

//Função recursiva para calcular x^y
int potencia(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * potencia(x, y - 1);
}

int main(){
    int x= 0, y= 0;
    printf("Digite o valor da base: \n");
    scanf("%d", &x);
    printf("Digite o valor do expoente: \n");
    scanf("%d", &y);
    if(y >=0){
        potencia(x, y);
        printf("%d^%d = %d\n", x, y, potencia(x, y));
    } else {
        printf("O expoente deve ser positivo\nEncerrar o programa...\n");
    }
    return 0;
}