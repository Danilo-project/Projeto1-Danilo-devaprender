#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//char nome[15] = "Danilo";
//char sexo = 'M';
//int idade = 32;
//float salario = 4000;

char nome[15];
char sexo = 'M';
int idade;
float salario;
void main(void) {
	
	//printf("O nome e %s \n", nome);
	//printf("O meu sexo e %c \n", sexo);
	//printf("A minha idade e %d \n", idade);
	//printf("O meu salario e %f", salario);
	
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	/*printf("Digite o seu sexo sendo a letra 'M' masculino e a letra 'F' feminino: \n");
	scanf("%c", &sexo);*/
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	
	printf("O seu nome e %s \n", nome);
	printf("A sua idade e %d \n", idade);
	printf("O seu sexo e %c \n", sexo);
	printf("O seu salario atual e de %f", salario);
}
