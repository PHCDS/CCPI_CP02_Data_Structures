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

void calcular_derivada() {
    float a, b, c;
 
    printf("\n-- Derivada --\n");
    printf("f(x) = ax^2 + bx + c\n");
    printf("insira o valor de a: ");
    scanf("%f", &a);
    printf("insira o valor de b: ");
    scanf("%f", &b);
    printf("insira o valor de c: ");
    scanf("%f", &c);
 
    printf("f'(x) = %.0fx + %.0f\n", 2 * a, b);
    }

int main() {
    int opcao;
    float n1, n2, media = 0;
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

 

    
    return 0;
}