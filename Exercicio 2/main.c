#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// opera��o *printf* nada mais do que mostrar a informa��o na tela, e ela pode ser usada como input e output
// para n�o retornar nem um valor se usa a opera��o *void*
// 1� *void* valor, 2� *void* argumento

/*int idade;
void main(void) {
	// toda fun��o tem parenteses e ponto e virgula
	//Comando de entrada
	printf("Hello, Word!");
	idade = 22;
	//Comando de saida
	printf("A minha idade � %d", idade);
}*/

float n1, n2;
void main(void) {
	// Comando de entrada
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	// Comando de saida
	printf("A soma da notas e: %f", n1 + n2);
}
