#include <stdio.h>
//      Escreva um aplicativo que insere um número consistindo em cinco dígitos do usuário, separa o
// número em seus dígitos individuais e imprime os dígitos separados uns dos outros por três
// espaços cada. Por exemplo, se o usuário digitar o número 42339, o programa deve imprimir: 4   2   3   3   9
int main()
{

    int numero;
    printf("Digite um número de cinco dígitos: ");
    scanf("%d", &numero);
    printf("%d   \n", numero);
    //Para pegar o último dígito, utilizar matemática usando o número 10 nos dá o resto da divisão de um número. 
    //Depois divide por 10 e elimina o último dígito
   int d5 = numero % 10;
    numero = numero / 10;

    int d4 = numero % 10;
    numero = numero / 10;

    int d3 = numero % 10;
    numero = numero / 10;

    int d2 = numero % 10;
    int d1 = numero / 10;

    
    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}
