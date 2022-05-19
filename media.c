#include <stdio.h>

int main(){
	float nota1,nota2,media;
	printf("Informe duas notas: ");
	scanf("%f%f",&nota1,&nota2);
	media = (nota1+nota2)/2;
	if(media>=6)
		printf("Aprovado com media:%.2f",media);
	else if(media>=4 && media<6)
		printf("Recuperacao,media:%.2f",media);
	else
		printf("Reprovado,media:%.2f",media);
	return 0;
}
