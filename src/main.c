#include<stdio.h>

void classificacao(float m) {
    if (m >= 6 && m <= 10) {
        printf("aprovado\n");
    } else if (m >= 4 && m < 6) {
        printf("recuperacao\n");
    } else {
        printf("reprovado\n");
    }
}

float media_aritmetica(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    

    
    return 0;
}