

void menu(int *op)
{
    printf("-----Digite a opção desejada!------\n");
    printf("Para incluir valor digite         -> 1\n");
    printf("Para excluir valor  digite        -> 2\n");
    printf("Para excluir todos valores digite -> 3\n");
    printf("Para imprimir a matriz digite     -> 4\n");
    printf("Para sair digite                  -> 0\n");
    scanf("%d",op);

}

/*void leValor(int *vet, int pos, int *cond)
{
    if (vet[pos]=='n')
    {
        cond=0;
    }
    else
    {
        cond=1;
    }
}*/

void preencheVetor(int *vet,int pos,int num)
{
    vet[pos]=num;
}

void excluiValor (int *vet,int pos)
{
    int i;
    for(i=pos;i<5;i++){
        if(vet[i+1] != '0'){
                vet[i]=vet[i+1];
                }else{
                    vet[i]='0';
                }
            }
}

 imprimeVet(int *vet)
{
    int i;
    for (i=0;i<5;i++){
        if(vet[i] != '0'){
        printf("\n %d",vet[i]);
        }

}

