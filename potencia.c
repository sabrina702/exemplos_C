#include <stdio.h>
#include <math.h>

int main(){
	float base,exp,res;
	printf("Informe a base e o expoente da potencia: ");
	scanf("%f%f",&base,&exp);
	res = pow(base,exp);
	printf("Resultado:%f",res);
	return 0;
	
}
