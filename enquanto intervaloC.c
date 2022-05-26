#include <stdio.h>

int main(){
	int inicio,fim,cont;
	printf("informe o inicio do intervalo:");
	scanf("%d",&inicio);
	printf("informe o fim do intervalo: ");
	scanf("%d",&fim);
	cont = inicio;
	while(cont<=fim){
		printf("%d\n",cont);
		cont++;
		Sleep(100);
	}
	return 0;
}
