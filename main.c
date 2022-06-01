#include <stdio.h>


int main() {
	
	float Dt,Cg,Cm;
	
	printf("Consumo medio\n");
	
	printf("Informe a distancia total percorrida: ");
	scanf("%f",&Dt);
	
	printf("Informe a quantidade de combustivel gasto: ");
	scanf("%f",&Cg);

	Cm = Dt/Cg;	
	
	printf("O consumo medio e %.2f",Cm);

	
	return 0;
}
