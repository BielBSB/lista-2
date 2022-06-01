#include <stdio.h> 


 int main() {
	
	float valor,xerox;
	
	printf("Quantas xerox voce quer?\n");
	scanf("%f",&xerox);
	
	if(xerox>100){ 
	valor= xerox*0.20;
	printf("valor a ser pago e: %.2f",valor);
	}else if(xerox > 0 && xerox<100){
		valor= xerox*0.25;	
		printf("valor a ser pago e: %.2f",valor);
	} else{
		printf("Numero de copias impossiveis.");
	}



	
	
	return 0;
}

