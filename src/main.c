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
    
switch (opcao) {
    case 1:
    printf("\n-- Inserir Notas --\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    media = media_aritmetica(n1, n2);
    printf("Notas salvas!\n");
    break;
    
    case 2:
    printf("\n-- Calcular Media --\n");
    media = media_aritmetica(n1, n2);
    printf("Media: %.2f\n", media); 
    break;

    case 3:
    printf("\n-- Verificar Situacao --\n");
    classificacao(media);
    break;
 
}
    
    return 0;
}