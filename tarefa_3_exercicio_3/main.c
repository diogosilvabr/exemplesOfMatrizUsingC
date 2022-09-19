#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double matriz[10][10];

    int i, j;
    for(i=0;i<10;i++) {
      for(j=0;j<10;j++) {
        printf("Digite um número: ");
        scanf("%lf", &matriz[i][j]);
            if(matriz[i] < matriz[j]) {
              matriz[i][j] = 2*(i) + 7*(j);
          } else if(matriz[i] == matriz[j]) {
              matriz[i][j] = 3*(i*i) - 1;
          } else if(matriz[i] > matriz[j]) {
              matriz[i][j] = 4*(i*i*i) - 5*(j*j) +1;
          }
        }
    }

    printf("%f", matriz[i][j]);
}
