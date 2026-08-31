#include <stdio.h>
//Escreva uma função chamada fatorial() que receba um número inteiro n e retorne o fatorial
//de n . A função deve retornar o fatorial calculado.

int CalcularFatorial(int n) {
     int resultado = 1;
      for (int i = 1; i <= n; i++) {
        resultado *= i;
      }
     return resultado;
}
int main()
{
    int fatorial;
     printf("Digite um número: ");
    scanf("%d", &fatorial);
   int fat = CalcularFatorial(fatorial);
   printf("%d eh fatorial de %d", fat, fatorial);
    
  
  return 0;
}