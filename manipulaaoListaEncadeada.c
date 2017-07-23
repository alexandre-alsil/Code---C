/*
	Bacharelado em Sistemas de Informação
	Descrição: Programa que tem como objetivo apresentar a manipulação de uma lista encadeada, por meio
					 das funções de inserção, impressão e pesquisa.

   Autor: Alexandre Alves da Silva
   Data de criação: 01/05/2016
   Última alteração: 05/05/2016
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/* ### Declaração das estruturas e protótipos de função ### */
// declaração do tipo de estrutura da lista
struct lista {
	// armazena a informação a ser manipulada
	int info;

	// ponteiro que referencia outra estrutura do mesmo tipo
	struct lista* prox;
};

// declaração da variável para manipular a lista
typedef struct lista Lista;

// prototipação das funções
void menu();
Lista *inicializa (void);
Lista *insere (Lista *l, int i);
void imprime (Lista *l);
int vazia (Lista *l);
Lista *busca (Lista *l, int v);
Lista *exclui1 (Lista *l, int v);

/* ### Fim da declaração das estruturas e protótipos de função ### */


/* ### Declaração das funções do programa ### */
// função principal
int main (){
	// cria um ponteiro para a lista
	Lista *l, *r;
	int op, num;

    l = inicializa(); //inicializando lista para evitar erros

	do{
		system("cls");
		menu();
		scanf("%d", &op);

		// verifica a opção digitada pelo usuário
		switch(op){
			// cria a lista
			case 1:
				// inicializa lista como vazia
				l = inicializa();
				printf("\n\t\tA lista foi criada com sucesso!!!");
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
			break;

			// insere elementos na lista
			case 2:
				// Trabalho futuro: verificar se a lista foi criada


				printf("\n\t\tInforme o novo valor: ");
				scanf("%d", &num);

				// insere na lista o elemento informado pelo usuário
				l = insere(l, num);

				printf("\n\t\tElemento inserido na lista com sucesso!!!");
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
			break;

			// imprime elementos da lista
			case 3:
				//	 verificar se a lista está vazia
				if(!vazia(l)){
					// imprime os elementos da lista
					imprime(l);
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				else{
					printf("\n\t\tA lista estah vazia!\n");
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}

			break;

			// imprime a lista
			case 4:
					// Trabalho futuro: verificar se a lista foi criada


					printf("\n\t\tDigite um valor a ser pesquisado: ");
					scanf("%d", &num);
					r = busca(l, num);
					if(r){
						printf("\n\t\tO valor %d estah na lista!\n\n", r->info);
						printf("\n\t\tTecle <ENTER> para continuar");
						getch();
					}
					else{
						printf("\n\t\tO valor %d nao estah na lista!\n\n", num);
						printf("\n\t\tTecle <ENTER> para continuar");
						getch();
					}

			break;

			// sai do programa
			case 5:
				printf("\n\t\tFim do Programa!\n");
			break;

            case 6:
            // exlui um item da lista
            printf("\n\t\tDigite um valor a ser excluido: ");
					scanf("%d", &num);
					r = exclui1(l, num);
					if(r){

						printf("\n\t\tO valor %d foi excluido!\n\n", num);
						printf("\n\t\tTecle <ENTER> para continuar");
						getch();
					}
					else{
						printf("\n\t\tO valor %d nao estah na lista!\n\n", num);
						printf("\n\t\tTecle <ENTER> para continuar");
						getch();
					}
			break;

			// se o usuário digitar uma opção fora da faixa entre 1 e 5
			default:
				printf("\n\tOpcao invalida!\n");
		} // fim do switch
	}while(op != 5); // fim do..while

	printf("\n");
	return 0;
}


// função que inicializa a lista
Lista *inicializa (void){
	return NULL;
}


// insere elemento novo na lista
Lista *insere (Lista *l, int i){
	Lista *novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}


// imprime os elementos da lista
void imprime (Lista *l){
	Lista *p; /* variável auxiliar para percorrer a lista */

	printf("\n\t\tElementos da Lista Encadeada\n");
	for (p = l; p != NULL; p = p->prox)
		printf("\t\tInfo = %d\n", p->info);

	printf("\n");
}


// retorna 1 se vazia ou 0 se não vazia
int vazia (Lista *l){
	return (l == NULL);
}


// busca um elemento na lista
Lista *busca (Lista *l, int v){
	Lista *p;
	for (p = l; p != NULL; p = p->prox)
		if (p->info == v)
			return p;

	// não achou o elemento
	return NULL;
}

Lista *exclui1 (Lista *l, int v){
	Lista *p, *ant;
	ant=l;
	for (p = l; p != NULL; p = p->prox)
		if (p->info == v)
            ant->prox=p->prox;
            return p->prox;
        else{
            ant=p;
        }
	// não achou o elemento
	return NULL;
}

// monta o menu do programa
void menu(){
	printf("\n\t\t#### Programa Simula Lista Encadeada ####\n");
	printf("\n\t\t1- Cria Lista Encadeada");
	printf("\n\t\t2- Insere Elementos na Lista Encadeada");
	printf("\n\t\t3- Imprime a Lista Encadeada");
	printf("\n\t\t4- Pesquisa Elementos na Lista Encadeada");
	printf("\n\t\t5- Sair do Programa");
	printf("\n\n\t\tDigite a opcao desejada: ");
}
/* ### Fim da declaração das funções do programa ### */
