#include<stdio.h>

int potencia(int x, int y);

int main(){

int a,b,total;

printf("\ndigite o numero: ");
scanf("%d",&a);
printf("\ndigite a expoente: ");
scanf ("%d",&b);

total=potencia(a,b);

printf("o total eh: %d",total);
return 0;


}

int potencia(int x, int y){
int i,aux=1;
for(i=1;i<=y;i++){
    aux = aux * x;
}
return aux;
}
