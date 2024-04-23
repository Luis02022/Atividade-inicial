#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float peso = 0; 
	float altura= 0; 
    float imc = 0, alturaTotal = 0;
	
	
	printf("Digite seu peso:");
	scanf("%f",&peso);
	
	
	printf("Digite sua altura:");
	scanf("%f",&altura);
	
	alturaTotal = altura * altura;
	
	imc = peso / alturaTotal;
	
	
	if (imc < 18.5){
		printf("Abaixo do peso\n");
	}else if(imc >= 18.6 && imc <= 24.9 ){
		printf("Peso ideal\n");
	}else if (imc >= 25.0 && imc <= 29.9){
		printf("Levemente acima do peso\n");
	}else if (imc >= 30.0 && imc <= 34.9) {
		printf("Obesidade grau I\n");
	}else if(imc >= 35.0 && imc <= 39.9){
		printf("Obesidade grau II (severa)\n");
	}else {
	   printf("Obesidade grau III (mórbida)\n");
	}
	
	
     printf("Seu IMC: %.2f \n", imc);
     
	
	
	
	
	
	
	
	
	return 0;
}
