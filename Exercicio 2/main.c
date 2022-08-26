#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// operação *printf* nada mais do que mostrar a informação na tela, e ela pode ser usada como input e output
// para não retornar nem um valor se usa a operação *void*
// 1° *void* valor, 2° *void* argumento

/*int idade;
void main(void) {
	// toda função tem parenteses e ponto e virgula
	//Comando de entrada
	printf("Hello, Word!");
	idade = 22;
	//Comando de saida
	printf("A minha idade é %d", idade);
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
