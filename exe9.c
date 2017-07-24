#include<stdio.h>
#include<stdlib.h>

struct Pessoa{ ;
char nome[20], email[30], bairro[20];
int idade;
};

void imprimirPessoa (struct Pessoa p);

int main(){

struct Pessoa p;

printf("Digite o nome: ");
getchar();
scanf("%[^\n]s", p.nome);
printf("Digite o email: ");
getchar();
scanf("%[^\n]s", p.email);
printf("Digite o bairro: ");
getchar();
scanf("%[^\n]s", p.bairro);
printf("Digite a idade: ");
scanf("%d", &p.idade);

imprimirPessoa(p);

return 0;}

void imprimirPessoa(struct Pessoa p){
printf("O nome da pessoa eh: %s\n", p.nome);
printf("O email da pessoa eh: %s\n", p.email);
printf("O bairro da pessoa eh: %s\n", p.bairro);
printf("A idade da pessoa eh: %d\n", p.idade);
}
