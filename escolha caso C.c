#include <stdio.h>

int main(){
	int op;
	float v1,v2,res;
	printf("SISTEMA DE CALCULOS\n");
	printf("1-soma\n 2-subtracao\n 3-divisao\n 4-multiplicacao\n");
	printf("entre com uma opcao: ");
	scanf("%d",&op);
	printf("informe dois valores:");
	scanf("%f%f",&v1,&v2);
	switch(op){
		case 1: res = v1+v2;
			break;
		case 2: res = v1-v2;
			break;
		case 3: res = v1/v2;
			break;
		case 4: res = v1*v2;
			break;
		default:printf("opcao invalida");
	}
	printf("resultado:%.2f",res);
	return 0;
	
}
