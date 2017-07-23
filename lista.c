/*1) Implemente uma função que tenha como valor de retorno o comprimento de
uma lista encadeada ou seja, calcule o numero de nós de uma lista.
prototipo: int comprimento(Lista *l);*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct lista {
	int info;
	struct lista* prox;
};

typedef struct lista Lista;

void menu();
Lista *inicializa();
Lista *insere (Lista *l, int i);
int comprimento(Lista *l);

int main(){
	Lista *l;
	int op, num, tam, t;

    l = inicializa();

	do{
		system("cls");
		menu();
		scanf("%d", &op);

		switch(op){

			case 1:
                printf("\n\t\tInforme o novo valor: ");
				scanf("%d", &num);
				l = insere(l, num);
				printf("\n\t\tValor inserido");
				system("pause");
			break;

			case 2:
                t=comprimento(Lista *l);
                printf("\n\tA lista possui %d elementos\n",t);
                system("pause");
            break;

			case 3:
				printf("\n\t\tFim do Programa!\n");
			break;


			default:
				printf("\n\tOpcao invalida!\n");
		}
	}while(op != 3);

	printf("\n");
	return 0;
}

Lista *inicializa (){
	return NULL;
}


// insere elemento novo na lista
Lista *insere (Lista *l, int i){
	Lista *novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

int comprimento(Lista *l){
    Lista *p;
    int t1 = 0;
    for(p=l; p!=NULL; p=p->prox){
        t1++;
    }
    return t1;
}

void menu(){
	printf("\n\t\t1- Insere Valores na Lista");
	printf("\n\t\t2- Quantidade de Elementos na Lista");
	printf("\n\t\t3- Sair do Programa");
	printf("\n\n\t\tDigite a opcao desejada: ");
}
