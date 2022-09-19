#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][5], maiorValor = 0, posicao[2][1];

    int i, j;
    for(i=0;i<5;i++) {
      for(j=0;j<5;j++) {
        printf("Digite um número: ");
        scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                posicao[0][0] = i;
                posicao[1][0] = j;
            }
        }
    }

    printf("Maior valor é %d e a posição é linha %d coluna %d", maiorValor,posicao[0][0], posicao[1][0]);
}

