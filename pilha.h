/*
    Integrantes: Alex Silva, Alexandre Alves, Lucas Freita, Victor Abreu
*/

// declara��o do tipo de estrutura da pilha
struct pilha{
    int NumContainer;
    struct pilha *prox;
};

// Define o tipo de dados container
typedef struct pilha container;

// prot�tipo das fun��es
void imprimirMenu();
container *inserirContainer(container *c, int NumContainer);
void imprimirTopo(container *c);
void imprimirTodos(container *c);
container* removerContainer(container* c);

// fun��o que imprime o menu
void imprimirMenu() {
    system("cls");
    printf("\n\t\tMenu\n");
    printf("\n\t1 - Empilhar item;");
    printf("\n\t2 - Imprimir topo;");
    printf("\n\t3 - Imprimir todos;");
    printf("\n\t4 - Desempilhar item;");
    printf("\n\t0 - Sair.\n\t");
    printf("\n\n\tDigite a opcao desejada: ");
}
// Fun��o de inserir container na pilha
container *inserirContainer(container *c, int NumContainer){
    container *aux;

    // aux recebe o endere�o de um espa�o de mem�ria
    aux = (container *) malloc(sizeof(container));
    // N�mero do container do aux recebe o n�mero lido do usu�rio
    aux->NumContainer = NumContainer;
    // pr�ximo recebe o anterior
    aux->prox = c;

    // retorna a pilha com item empilhado
    return aux;
}

// Fun��o que imprime o item do topo da pilha
void imprimirTopo(container *c){
    container *aux = c;

    // verifica se a pilha est� vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else{
        printf("\n\tO item do topo eh: %d\n\t", aux->NumContainer);
    }
}

// Fun��o que imprime todos os itens da pilha
void imprimirTodos(container *c){
    container *aux = c;

    // verifica se a pilha est� vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else {
        // percorre a pilha, imprimindo os itens empilhados
        for (; aux != NULL; aux = aux->prox) {
            printf("\n\tItem: %d", aux->NumContainer);
        }
    }
}

// Fun��o que remove um item da pilha
container* removerContainer(container* c){
    container *aux = c;

    // verifica se a pilha est� vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else {
        // c recebe o pr�ximo
        c = c->prox;
        // o valor do topo � removido
        free(aux);

        // retorna o indice da pilha, com novo topo
        return c;
    }
}
