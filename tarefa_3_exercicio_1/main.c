#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4], numero, maioresQueDez=0;

    int i;
    for(i=0;i<3;i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);
            if(numero > 10) {
                maioresQueDez++;
          }
    }

    printf("A quantidade de números maiores que 10 é: %d", maioresQueDez);
}
