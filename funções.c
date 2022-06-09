#include <stdio.h>
#define PI 3.1415

float areaCir(float raio){
	float r;
	r = PI*raio*raio;
	return r;
}//fim função area

int fatorial (int num){
	int cont, fat = 1;
	for(cont=1; cont<=num; cont++)
		fat = fat * cont;
	return fat;	
}//fim funcao fat

int menu(){
	int op;
	printf("- Sistemas de Informacao -\n");
	printf("1 - Calculo da area do circulo\n");
	printf("2 - Fatorial\n");
	printf("0 - Sair\n");
	printf("Entre com uma opacao: ");
	scanf("%d", &op);
	return op;
}//fim funcao menu

int main(){
	int op, num;
	float raio;
	do{
		op = menu();
		switch(op){
			case 1:
				printf("informe o raio: ");
				scanf("%f", &raio);
				printf("Area: %f\n", areaCir(raio));
				break;
			case 2:
				printf("informe um numero: ");
				scanf("%d", &num);
				printf("Fatorial: %d\n", fatorial(num));
				break;	
			case 0:
				printf("Saindo....");
				break;
			default: printf("Opcao errda!\n");
		}
	}while (op != 0);
	
		
}//fim funcao principal
