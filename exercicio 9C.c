#include <stdio.h>

int main(){
	int base,exp,pot=1,i;
	printf("informe a base e o expoente: ");
	scanf("%d%d",&base,&exp);
	for(i=1;i<=exp;i++){
		pot*=base;
	}
	printf("%d ^ %d = %d",base,exp,pot);
	return 0;
}
