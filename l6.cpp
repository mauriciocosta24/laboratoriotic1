#include <stdio.h>
main(){
	double custo,preco,p=0;
	int c=0;
	printf("introduz o custo do espetaculo");
	scanf("%lf",&custo);
	printf("introduz o preco dos convites");
	scanf("%lf",&preco);
	do{
		p=p+preco;
	   c++;	
	}while(p<=custo);
	printf("vai ser necessario vender %i convites ",c);
}