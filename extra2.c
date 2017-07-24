#include<stdio.h>

void imprimirNota (float m[6], int i);

int main(){

    int i;
    float notas[6];

    for(i=0;i<=5;i++){
    printf("digite a nota: ");
    scanf("%f",&notas[i]);
    }

imprimirNota(notas,6);
return 0;
}

void imprimirNota(float m[6], int n){
    int i;
    for (i=0;i<=5;i++){
    printf("A nota do aluno %d eh: %2.f\n",i+1,m[i]);

}
}
