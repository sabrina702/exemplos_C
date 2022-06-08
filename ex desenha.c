#include <stdio.h>

void desenhaLinha(int n){
	int cont;
	for(cont=1;cont<=n;cont++){
		printf("_");
	}
	printf("\n");
}

int main(){
	int tamanho;
	printf("informe o tamanho da linha: ");
	scanf("%d",&tamanho);
	desenhaLinha(tamanho);
	return 0;
}
