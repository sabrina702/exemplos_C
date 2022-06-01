#include <stdio.h>

int main(){
	float media,soma=0;
	int cont,num,positivo=0;
	for(cont=1;cont<=6;cont++){
		scanf("%d",&num);
		if(num>0){
			soma+=num;
			positivo++;
		}	
	}
	media=soma/positivo;
	printf("%d valores positivos\n",positivo);
	printf("%.1d",media);
	return 0;
	
}
