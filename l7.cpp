#include <stdio.h>
main(){
	double preco,pl,pd,lucro,desconto;
	printf("digite o preco de fabrica");
	scanf("%lf",&preco);
	printf("introduz o percentual de lucro ao distribuidor");
	scanf("%lf",&pl);
	printf("introduz tambem o percentual de desconto");
	scanf("%lf",&pd);
	lucro=(preco*pl)/100;
	printf("o lucro do distribuidor e %lf",lucro);
	desconto=(preco*pd)/100;
    printf("o valor correspondente aos impostos e %lf ",desconto);
    printf("o preco final do veiculo e %lf ",preco-desconto-lucro);
}