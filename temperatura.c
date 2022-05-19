#include <stdio.h>

int main(){
	float cels,fahr;
	printf("Informe a temperatura em celsius: ");
	scanf("%f",&cels);
	fahr=(9*cels+160)/5;
	printf("temperatura em fahrenheit: %f",fahr);
	return 0;
}
