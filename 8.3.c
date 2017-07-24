#include<stdio.h>

int main()
{
    int m[50],p,q;
    for (p=0; p<50; p++)
    {

        printf("\ndigite o valor da posicao [%d]: ",p);
        scanf("%d",&m[p]);
    }

    for (p=0; p<50; p++)
    {
        if (m[p]==10)
        {
            printf("\n A posição %d eh igual a 10!",p);
        }

    }
return 0;
}
