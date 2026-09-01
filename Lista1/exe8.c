#include <stdio.h>
// Escreva uma função chamada mdc() que calcule o máximo divisor comum (MDC) entre dois
// números inteiros

int CalcularMDC(int a, int b) {
   while(b != 0){
    int resto = a % b;
    a = b;
    b = resto;
   }
   return a;
}
int main()
{
    int num1, num2;
     printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
   int mdc = CalcularMDC(num1, num2);
   printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);
    
  
  return 0;
}
