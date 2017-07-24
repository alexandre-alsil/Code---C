#include<stdio.h>

int main()
{
    int i;
    float a,b,c,maior, medio, menor;

    printf("digite 1 para crescente, 2 para decrescente e 3 para maior no meio:");
    scanf("%d",&i);
    printf("digite o primero numero: ");
    scanf("%f",&a);
    printf("digite o segundo numero: ");
    scanf("%f",&b);
    printf("digite o terceiro numero: ");
    scanf("%f",&c);

    if (a>b && b>c)
    {
        maior = a;
        medio = b;
        menor = c;
    }
    else if(b>a && a>c)
    {
        maior = b;
        medio = a;
        menor = c;
    }
    else if (c>b && b>a)
    {
        maior = c;
        medio = b;
        menor = a;
    }
    else if (c>a && a>b)
    {
        maior = c;
        medio = a;
        menor = b;
    }
    else if (a>c && c>b)
    {
        maior = a;
        medio = c;
        menor = b;
    }
    else if (b>c && c>a)
    {
        maior = b;
        medio = c;
        menor = a;
    }

    switch(i){
case 1:
    printf("crescente %.2f %.2f %.2f",menor, medio, maior);
    break;
case 2:
    printf("decrescente %.2f %.2f %.2f",maior, medio, menor);
    break;
case 3:
    printf("maior no meio %.2f %.2f %.2f", medio, maior, menor);
    break;
default:
    printf("digite numero de 1 a 3 somente");
    break;
    }
    return 0;
}
