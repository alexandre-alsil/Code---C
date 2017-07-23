/*
	Bacharelado em Sistemas de Informa��o
	Descri��o: Programa que tem como objetivo apresentar a manipula��o de uma lista encadeada, por meio
					 das fun��es de inser��o, impress�o e pesquisa.

   Autor: Alexandre Alves da Silva
   Data de cria��o: 01/05/2016
   �ltima altera��o: 05/05/2016
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/* ### Declara��o das estruturas e prot�tipos de fun��o ### */
// declara��o do tipo de estrutura da lista
struct lista {
	// armazena a informa��o a ser manipulada
	int info;

	// ponteiro que referencia outra estrutura do mesmo tipo
	struct lista* prox;
};

// declara��o da vari�vel para manipular a lista
typedef struct lista Lista;

// prototipa��o das fun��es
void menu();
Lista *inicializa (void);
Lista *insere (Lista *l, int i);
void imprime (Lista *l);
int vazia (Lista *l);
Lista *busca (Lista *l, int v);
Lista *exclui1 (Lista *l, int v);

/* ### Fim da declara��o das estruturas e prot�tipos de fun��o ### */


/* ### Declara��o das fun��es do programa ### */
// fun��o principal
int main (){
	// cria um ponteiro para a lista
	Lista *l, *r;
	int op, num;

    l = inicializa(); //inicializando lista para evitar erros

	do{
		system("cls");
		menu();
		scanf("%d", &op);

		// verifica a op��o digitada pelo usu�rio
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

				// insere na lista o elemento informado pelo usu�rio
				l = insere(l, num);

				printf("\n\t\tElemento inserido na lista com sucesso!!!");
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
			break;

			// imprime elementos da lista
			case 3:
				//	 verificar se a lista est� vazia
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

			// se o usu�rio digitar uma op��o fora da faixa entre 1 e 5
			default:
				printf("\n\tOpcao invalida!\n");
		} // fim do switch
	}while(op != 5); // fim do..while

	printf("\n");
	return 0;
}


// fun��o que inicializa a lista
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
	Lista *p; /* vari�vel auxiliar para percorrer a lista */

	printf("\n\t\tElementos da Lista Encadeada\n");
	for (p = l; p != NULL; p = p->prox)
		printf("\t\tInfo = %d\n", p->info);

	printf("\n");
}


// retorna 1 se vazia ou 0 se n�o vazia
int vazia (Lista *l){
	return (l == NULL);
}


// busca um elemento na lista
Lista *busca (Lista *l, int v){
	Lista *p;
	for (p = l; p != NULL; p = p->prox)
		if (p->info == v)
			return p;

	// n�o achou o elemento
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
	// n�o achou o elemento
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
/* ### Fim da declara��o das fun��es do programa ### */
