#include<stdio.h>
#include<stdlib.h>
#include<math.h>	
/*5. A multiplica��o de dois n�meros inteiros pode ser
feita atrav�s de somas sucessivas. Proponha um
algoritmo recursivo Multip Rec(n1,n2) que calcule a
multiplica��o de dois inteiros.*/
main(){
	int multiplicacao(int n1, int n2);
	int n1,n2,resultado;
	printf("Diga um numero inteiro: ");
	scanf("%d",&n1);
	printf("Diga outro numero inteiro: ");
	scanf("%d",&n2);
	resultado = multiplicacao(n1,n2);
	printf("O resultado �: %d",resultado);
	
}
multiplicacao(int n1, int n2){
	int resultado;
	resultado = n1*n2;
}
