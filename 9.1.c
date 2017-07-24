#include<stdio.h>
float som(float x,float y), sub(float x,float y),mul(float x,float y),div(float x,float y);
void exibirMenu();

int main()
{

    int dec;
    float a,b,resultado;
    char resp = 's';

    while(resp == 's')
    {
        exibirMenu();
        scanf("%d",&dec);
        printf("digite um numero: ");
        scanf("%f",&a);
        printf("digite um numero: ");
        scanf("%f",&b);

        switch (dec)
        {
        case 1:
            resultado = som (a,b);
            printf("o resultado eh: %.2f", resultado);
            break;
        case 2:
            resultado = sub (a,b);
            printf("o resultado eh: %.2f", resultado);
            break;
        case 3:
            resultado = mul (a,b);
            printf("o resultado eh: %.2f", resultado);
            break;
        case 4:
            resultado = div(a,b);
            printf("o resultado eh: %.2f", resultado);
            break;
        default:
            printf("decisão invalida");
            break;
        }
        printf("\n\nQuer continuar? s/n \n");
        getchar();
        scanf("%c",&resp);
    }
    printf("Saindo do sistema!");
    return 0;

}

void exibirMenu()
{
    printf("\n########### CALCULADORA ###########");
    printf("\n##### ESCOLHA UMA DAS OPCOES ######");
    printf("\n#### DIGITE 1 PARA SOMAR ##########");
    printf("\n#### DIGITE 2 PARA SUBTRAIR #######");
    printf("\n#### DIGITE 3 PARA MULTIPLICAR ####");
    printf("\n#### DIGITE 4 PARA DIVIDIR ########\n");
}

float som(float x, float y)
{
    return x+y;
}
float sub(float x, float y)
{
    return x-y;
}
float mul(float x, float y)
{
    return x*y;
}
float div(float x, float y)
{
    return x/y;
}
