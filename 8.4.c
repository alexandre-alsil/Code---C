#include<stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d",&num);

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("este numero eh par");
        }
        else
        {
            printf("este numero eh impar");
        }


    }else
    {
    printf("este numero eh negativo");
    }
    return 0;
}
