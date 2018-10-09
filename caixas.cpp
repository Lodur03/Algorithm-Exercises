/**
*	TRABALHO LPA
*	ALUNO: FELIPE COELHO SILVA, LEONARDO ANDRADE FERREIRA PALIS
	EXERCICIO: Desempilhando Caixas (Problema F) - competicao
**/
#include <stdio.h>
#include <stdlib.h>

int main () {

	int * v;
    int numBox, numPilhas;
	int i, j, pilha, altura, esquerda, direita, box;

    scanf ("%d%d", &numBox, &numPilhas);
    while (numBox !=0 || numPilhas!=0) {

		//aloca mem para a pilha
        v = (int *)malloc (numPilhas*sizeof (int));

        //montaPilha
        for (i = 0; i < numPilhas; i++) {
			scanf ("%d", &v[i]);
			for (j = 0; j < v[i]; j++) {
				scanf ("%d", &box);
                if (box == 1) {
                    pilha = i;
                    altura = j+1;
                }
            }
        }
		//caixas a cima
        esquerda = v[pilha] - altura;
		direita = v[pilha] - altura;

		//removendo
        for (i = pilha-1; i >= 0 && v[i] >= altura; i--){
            esquerda = esquerda + (v[i]-altura+1);
        }
        for (i = pilha+1; i < numPilhas && v[i] >= altura; i++){
            direita = direita + (v[i]-altura+1);
        }

		//printa o menor
		if (esquerda < direita){
			printf ("%d", esquerda);
		}else{
			printf ("%d", direita);
		}

        free(v); //libera espaço da mem
        scanf ("%d%d", &numBox, &numPilhas);
    }

    return 0;
}
