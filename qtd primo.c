#include <stdio.h>

int ehprimo(int num){
	int div;
	if(num==1 || num==-1)
		return 0;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}
	return 1;
}

int qtdprimo(int n){
	int cont,qtd=0;
	for(cont=1;cont<=n;cont++){
		if(n%cont==0)
		qtd++;
	}
	return qtd;
}

int main(){
	int n,resp;
	printf("informe o valor de n: ");
	scanf("%d",&n);
	resp = qtdprimo(n);
	printf("quandtidade de primos entre %d e %d : %d",n,resp);
	return 0;
}
