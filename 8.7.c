#include<stdio.h>

int main()
{
    int aum;
    float sal,saln;
    char conceito, nome[30];

    printf("digite o nome: ");
    getchar();
    scanf("%[^\n]s",nome);
    printf("digite o salario: ");
    scanf("%f",&sal);

if (sal<=722.00){
    aum=10;
    saln = sal * 1.10;
}else
if(sal<=900.00){
    aum=6;
    saln = sal * 1.06;
}else
if(sal<=1200.00){
    aum=4;
    saln = sal * 1.04;
}else
if(sal<=1500.00){
    aum=2;
    saln = sal * 1.02;
}else{
aum=0;
    saln = sal * 1.0;
}
printf("O funcionario %s tinha o salario %.2f , \nrecebeu %d porcento de aumento e seu novo salario\n eh de %.2f ",nome,sal,aum,saln);
return 0;
}
