#include <stdio.h>
#define PI 3.1416

float areacir(float raio){
	float r;
	r = PI*raio*raio;
	return r;
}
int main(){
	float raio,res;
	printf("informe o raio: ");
	scanf("%f",&raio);
	res = areacir(raio);
	printf("resultado%.2f",res);
	return 0;
}
