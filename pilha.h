/*
    Integrantes: Alex Silva, Alexandre Alves, Lucas Freita, Victor Abreu
*/

// declaração do tipo de estrutura da pilha
struct pilha{
    int NumContainer;
    struct pilha *prox;
};

// Define o tipo de dados container
typedef struct pilha container;

// protótipo das funções
void imprimirMenu();
container *inserirContainer(container *c, int NumContainer);
void imprimirTopo(container *c);
void imprimirTodos(container *c);
container* removerContainer(container* c);

// função que imprime o menu
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
// Função de inserir container na pilha
container *inserirContainer(container *c, int NumContainer){
    container *aux;

    // aux recebe o endereço de um espaço de memória
    aux = (container *) malloc(sizeof(container));
    // Número do container do aux recebe o número lido do usuário
    aux->NumContainer = NumContainer;
    // próximo recebe o anterior
    aux->prox = c;

    // retorna a pilha com item empilhado
    return aux;
}

// Função que imprime o item do topo da pilha
void imprimirTopo(container *c){
    container *aux = c;

    // verifica se a pilha está vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else{
        printf("\n\tO item do topo eh: %d\n\t", aux->NumContainer);
    }
}

// Função que imprime todos os itens da pilha
void imprimirTodos(container *c){
    container *aux = c;

    // verifica se a pilha está vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else {
        // percorre a pilha, imprimindo os itens empilhados
        for (; aux != NULL; aux = aux->prox) {
            printf("\n\tItem: %d", aux->NumContainer);
        }
    }
}

// Função que remove um item da pilha
container* removerContainer(container* c){
    container *aux = c;

    // verifica se a pilha está vazia
    if(aux == NULL){
        printf("A Pilha esta vazia. Insira um item antes.\n");
    }else {
        // c recebe o próximo
        c = c->prox;
        // o valor do topo é removido
        free(aux);

        // retorna o indice da pilha, com novo topo
        return c;
    }
}
