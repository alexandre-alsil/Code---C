#include<stdio.h>

int main()
{
    float sal, fin, divid;

    printf("digite o salario: ");
    scanf("%d",&sal);
    printf("digite o financiamento: ");
    scanf("%d",&fin);

    divid = fin / sal;
    if (divid <= 5.0){
        printf("aprovado\n");
    }else {
    printf("reprovado\n");
    }
    printf("mto obrigado!");
    return 0;

}

