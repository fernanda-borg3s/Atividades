#include <stdio.h>


int main()
{
int I;
    float A, B, C;
    float menor, meio, maior;

    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    // (Menor, Meio e Maior)
    if (A <= B && A <= C) {
        menor = A;
        if (B <= C) { meio = B; maior = C; }
        else { meio = C; maior = B; }
    } else if (B <= A && B <= C) {
        menor = B;
        if (A <= C) { meio = A; maior = C; }
        else { meio = C; maior = A; }
    } else {
        menor = C;
        if (A <= B) { meio = A; maior = B; }
        else { meio = B; maior = A; }
    }

    // valor de acordo com o valor de I
    if (I == 1) {
        // crescente
        printf("%.2f  %.2f  %.2f\n", menor, meio, maior);
    } else if (I == 2) {
        // decrescente
        printf("%.2f  %.2f  %.2f\n", maior, meio, menor);
    } else if (I == 3) {
        // O maior fica no meio
        printf("%.2f  %.2f  %.2f\n", menor, maior, meio);
    } else {
        printf("Valor de I invalido!\n");
    }

    return 0;
  

}
