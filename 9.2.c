#include<stdio.h>

void impRes();
int x,y,qdn(int n),rzn(int n), p4n(int n),q(int n),muln(int n);

int main(){
int n, qd, rz, p4, mul,resultado;

printf("digite um numero: ");
scanf("%d",&n);


qd = qdn (n);
rz = rzn (qd,n);
p4 = p4n (n);
mul = muln (p4n);

printf(" \nO quadrado de %d eh: %d",n,qd);
printf(" \nA raiz de %d eh: %d",qd,rz);
printf(" \na quarta potencia de %d eh: %d",rz,p4);
printf(" \nO dobro de %d eh: %d",p4,mul);

impRes(n);
return 0;
}

void impRes(n){
printf(" \nO quadrado de %d eh: %d",n,qdn);
printf(" \nA raiz de %d eh: %d",qdn,rzn);
printf(" \na quarta potencia de %d eh: %d",rzn,p4n);
printf(" \nO dobro de %d eh: %d",p4n,muln);

}

//int calculo (int n){
//int qdn,rzn, p4n,q,muln;
int qdn(int x){
    qd=qdn;
return  x* x;
}
int rzn (int x,int y){
    rz=rzn;
return x / y;
}
int p4n (int n){
return n*n*n*n;
}
int muln (int p4n){
return p4n * 2;
}

