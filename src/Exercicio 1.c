#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que primeiro leia a altura de 5 atletas e
armazene em um vetor. Após imprima o conteúdo armazenado */

void main(void)
{
    setlocale(LC_ALL, "pt_BR");
    float a[6], altura;
    printf("Exercicio 1 - Altura\n\n");

    // Carrega o valor da altura para cada posição do vetor

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a altura do %dº atleta: ", i);
        scanf("%f", &altura);
        a[i] = altura;
    }

    // Mostra a altura de cada posição

    printf("\n\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("\nAltura do %dº atleta: %1.2f ", i, a[i]);
    }
    printf("\n");
}