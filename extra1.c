#include<stdio.h>
char verificarConceito(float n);

int main(){
    char conceito;
    float nota;

    printf("digite a nota: ");
    scanf("%f",&nota);
    conceito=verificarConceito(nota);
    printf("Nota: %2.f | Conceito: %c",nota,conceito);

    return 0;


}

char verificarConceito(float n){
    char conceito;
        if (n>=8){
            conceito='A';
        } else
            if (n>=6){
                conceito='B';
            } else {
            conceito='C';
            }
return conceito;
}
