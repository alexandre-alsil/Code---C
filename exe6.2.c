#include <stdio.h>
#include <stdlib.h>

int main()
{

    float v[3][4];
    int L=0,C=0;

    for (L=0; L<=2; L++)
    {

        C=0;
          while (C<=3)
        {
printf("\n\ndigite no numero na posicao: %d %d\n", L,C);
scanf("%f", &v[L][C]);
C++;
        }
    }

system("cls");

printf("Numero na posicao superior esquerdo eh: %f", v[0][0] );
printf("\n\nNumero na posicao inferior esquerdo eh: %f", v[2][0] );



    return 0;
}
