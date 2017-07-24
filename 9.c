#include<stdio.h>

char testePrimo(int x);

int main(){

int a;
char teste;

printf("Digite um numero: ");
scanf("%d",&a);

teste = testePrimo(a);



printf("\nEste numero e primo? %c",teste);

return 0;

}

char testePrimo(int x){
int i,j;

for (i=x;i>=1;i--){
    if (x%i==0){
        j++;
    }
}
if (j==2){
 return 'v';
}    else{
return 'f';
}


}
