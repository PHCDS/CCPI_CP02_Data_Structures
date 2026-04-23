#include<stdio.h> //Foi adicionado o <> e as aspas foram removidas

int main() {
    float nota1, nota2, media; //Foi adicionado o ";"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Foi adicionado o "&"

    media = (nota1 + nota2) / 2; //Parênteses adicionado

    if (media >= 6) { // Foi adicionado o >, pois a lógica estava errada 
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}