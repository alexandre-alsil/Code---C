#include<stdio.h>

int main()
{
    float nota;
    char conceito;

    printf("digite a nota: ");
    scanf("%f",&nota);

if (nota >=9){
    conceito = 'A';
}else
if (nota >=8){
    conceito = 'B';
}else
if (nota>=6){
    conceito = 'C';
}else
if(nota >=3){
    conceito = 'D';
}else {
conceito = 'E';
}
printf("O conceito da nota %.2f eh: %c",nota,conceito);
return 0;
}
