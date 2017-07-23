#include<stdio.h>
#include<stdlib.h>
#include "vetor.h"


int main()
{
    int vet[5],i,num,op,pos;

    //inicializaVetor(&vet);

    menu(&op);
    while(op!=0)
    {
        switch( op )
        {
        case 0 :
            break;

        case 1 :
            printf("\nDeseja preencher até qual posicao?");
            scanf("%d",&pos);
            for(i=0; i<pos; i++)
            {
                printf("Digite o valor da posicao %d\n",i+1);
                scanf("%d",&num);
                preencheVetor(&vet,i,num);

            }
            printf("Vetor preenchido com sucesso!");
            system("pause");
            printf("\n");
            break;

        case 2:
            printf("\nDeseja excluir qual posicao?");
            scanf("%d",&pos);
            excluiValor(&vet,pos);
            printf("Valor excluido com sucesso!");
            printf("\n");
            system("pause");
            printf("\n");
            break;

        case 4:
            imprimeVet(&vet);
            printf("\n");
            system("pause");
            break;
        }
        system("cls");
        menu(&op);
    }
    printf("\nSaindo do sistema!");
    system("pause");
    return 0;
}


