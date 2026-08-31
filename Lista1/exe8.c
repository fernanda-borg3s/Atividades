#include <stdio.h>
// Escreva uma função chamada mdc() que calcule o máximo divisor comum (MDC) entre dois
// números inteiros

int CalcularMDC(int a, int b) {
    //NAO SEI CALCULAR MDC NESSE CARAI
    int resultado = a + b;
     return resultado;
}
int main()
{
    int num1, num2;
     printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
   int mdc = CalcularMDC(num1, num2);
   printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);
    
  
  return 0;
}