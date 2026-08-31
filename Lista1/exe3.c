#include <stdio.h>
#include <math.h>
//Faça um aplicativo que verifique se o número digitado n é um número primo. Lembrando que
//todo número primeiro é divisível apenas por 1 ou por ele mesmo.
int main()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
     // números <=  1 não são primos
    if(numero <= 1){
         printf("%d nao eh primo", numero);
         return 0;
    }else{
        double limite = sqrt(numero);
        for(int i = 2; i < limite; i++){
            if (numero % i == 0) {
                printf("%d nao eh primo", numero); // Encontrou um divisor, não é primo
                return 0;
            }
        }
        
       
    }
    printf("%d eh numero primo", numero);

    return 0;
}