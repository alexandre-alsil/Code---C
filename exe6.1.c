#include <stdio.h>
#include <stdlib.h>

int main()
{

    char vet [3][3][25];
    int L;

    for (L=0;L<=2;L++)
    {
        printf("\n\nDigite o nome na posicao: %d %d\n\n", L,0);
        scanf("%s", &vet[L][0]);
        printf("\n\nDigite o email na posicao: %d %d\n\n",L,1);
        scanf("%s", &vet[L][1]);
        printf("\n\nDigite o telefone na posicao: %d %d\n\n",L,2);
        scanf("%s", &vet[L][2]);
    }
    system ("cls");

    L=0;
      for(L=0;L<=2; L++)
    {
        printf ("O nome %s tem email %s e telefone %s!", vet[L][0],vet[L][1],vet[L][2]);
        printf("\n\n");
    }
    return 0;
}
