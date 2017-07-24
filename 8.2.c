#include <stdio.h>

int main()
{
    int m[7][4],l,c,menor,lin=0,col=0;

    for (l=0; l<7; l++)
    {
        for (c=0; c<4; c++)
        {
            printf("\ndigite um numero inteiro para [%d][%d]: ",l,c);
            scanf("%d",&m[l][c]);
        }
    }
    menor = m[0][0];

for (l=0; l<7; l++)
    {
        for (c=0; c<4; c++)
        {
            if (m[l][c] < menor){
                menor = m[l][c];
                lin = l;
                col = c;
            }

        }
    }
printf("menor eh: %d, e local eh: [%d] [%d]",menor,lin,col);
return 0;
}
