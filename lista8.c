#include<stdio.h>

int main()
{
    int m[5][6],soma,j=2.0;
    int l=0,c=0,i=0;
    float media;

    for (l=0; l<5; l++)
    {

        for(c=0; c<6; c++)
        {
            printf("digite o numero [%d][%d]: \n",l,c);
            scanf ("%d",&m[l][c]);

        }
    }
    for (l=0; l<5; l++)
    {

        for(c=0; c<6; c++)
        {
            if (m[l][c] % j == 0)
            {
                soma += (m[l][c]);
                i++;
            }
        }
    }
    media = soma/i;
    printf("soma = %d e qtde = %d",soma,i);
    printf("o valor da media é: %.2f",media);
    return 0;
}
