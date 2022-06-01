#include <stdio.h>


int main() {
	
	float Sal,aumento;
	
	printf("Informe seu salario: ");
	scanf("%f",&Sal);
	
	if(Sal<=1000 && Sal>0 ){
	 aumento = Sal + Sal*0.1;
	
	}else if(Sal>1000){
		printf("Salario inexistente");
	}
	
	printf("Salario e: %.2f",aumento);
	
	return 0;
}
