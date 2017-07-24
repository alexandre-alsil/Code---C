#include <stdio.h>

int main()
{

    float v[2][3], t[3][2];
    int L,C;

    for (L=0; L<=1; L++)
    {
        C=0;
        while (C<=2)
        {
            printf("Digite o numero na posicao %d %d:  ", L, C);
            scanf("%f", &v[L][C]);
            C++;

        }

    }
    L=0;
    C=0;
    for (L=0; L<=1; L++)
    {
        C=0;
        while (C<=2)
        {
            t[C][L] = v[L][C];
            C++;
        }
    }
    system("cls");
    L=0;
    C=0;

    for (L=0; L<=1; L++)
    {
        C=0;
        while (C<=2)
        {
            printf("\no vetor tem v o numero %f na posicao %d %d:  ",v[L][C], L, C);
            C++;
        }
        printf("\n\n");
    }
    L=0;
    C=0;

    for (L=0; L<=2; L++)
    {
        C=0;
        while (C<=1)
        {
            printf("\no vetor t tem o numero %f na posicao %d %d:  ",t[L][C], L, C);
            C++;
        }
        printf("\n\n");
    }
    return 0;
}
