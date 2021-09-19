#include <stdio.h>
main(){
	double h,mai,men;
	for(int c=1;c<=15;c++){
		printf("digite asu altura");
		scanf("%lf",&h);
		if(c==1){
			mai=h;
			men=h;}
			if(h>mai)
				mai=h;
			if(h<men)
				men=h;
	}
	printf("a maior altura e %lf",mai);
	printf("a menor altura e %lf",men);
}