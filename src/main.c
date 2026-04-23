#include<stdio.h>

void classificacao(float m) {
    if (m >= 6 && m <= 10) {
        printf("Situacao: APROVADO\n");
    } else if (m >= 4 && m < 6) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}

int main() {
    

    
    return 0;
}