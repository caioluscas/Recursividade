#include<stdio.h>
#include<stdlib.h>
#include<math.h>	
/*3. Crie uma função recursiva que receba dois inteiros
positivos k e n e calcule k^n
.*/
main(){
	int elevado(int k, int n);
	int n, k, resultado;
	printf("diga o numero inteiro: ");
	scanf("%d",&k);
	printf("\ndiga outro numero inteiro: ");
	scanf("%d",&n);
	resultado = elevado(k,n);
	printf("O resultado é: %d", resultado);
}
elevado(int k, int n){
	int resultado;
	if(n==0){
		resultado=1;
	}
	else{
		resultado=pow(k,n);
	}
	return(resultado);	
}
