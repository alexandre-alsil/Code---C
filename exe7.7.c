#include<stdio.h>

int main()
{

    int L=0,C=0,J=0,Pm[3][2], Bot[2][3], totP=0, totG=0;


    while(C<=2)
    {
        for(J=0,J<=2,J++)
        {
            printf("Digite quantos botoes P vao na camisa %d \n",J);
            scanf("%d",&Bot[0][C]);
        }
        C++;
    }

    C=0;
    J=0;

    while(C<=2)
    {
        for(J=0,J<=2,J++)
        {
            printf("Digite quantos botoes G vao na camisa %d \n",J);
            scanf("%d",&Bot[1][C]);
        }
        C++;
    }

    C=0;
    J=0;

  while(L<=2)
    {
        for(C=0,C<=1,C++)
        {
            printf("Digite quantas camisas %d foram produzidas no mes %d:  \n",L+1,C+1);
            scanf("%d",&Pm[L][C]);
        }
        L++;
    }

    C=0;
    L=0;

for(C=0,C<=2,C++)
    {
        L=0;
    while(L<=1){
            totP+= Bot[L][C]*Pm[C][L];


    }

    }

    }



