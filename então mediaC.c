#include <stdio.h>

int main(){
	int num,cont=0;
	float soma=0,media;
	do{
		printf("informe um numero: ");
		scanf("%d",&num);
		if(num>=50 && num<=100){
			cont++;
			soma+=num;	
		}
	}while(num!=0);
	media = soma/cont;
	printf("quantidade de valores entre 50 e 100:%d  \n",cont);
	printf("media dos valores:%.2f",media);
	return 0;
}
