#include <stdio.h>

int ehprimo(int num){
	int div;
	if(num==1 || num==-1)
		return 0;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}
	return 1;
}
int main(){
	int cont,in,fim;
	printf("informe o valor inicial e final:");
	scanf("%d%d",&in,&fim);
	for(cont=in;cont<=fim;cont++){
		if(ehprimo(cont)==1)
			printf("%d\n",cont);
	}
	return 0;
}
