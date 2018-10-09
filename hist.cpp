/**
*	TRABALHO LPA
*	ALUNO: FELIPE COELHO SILVA, LEONARDO ANDRADE FERREIRA PALIS
	EXERCICIO: HISTORICO DE COMANDOS
**/

#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

int exists(int vec[], int element, int length){

	for(int i = length -1 ; i >= 0; i--){
		if(vec[i] == element){
			return i;
		}

	}

	return -1;


}


int main(void){

	stack<int> pilha;
	int quant;
	scanf("%d", &quant);
	int aux = quant;
	int * vec = new int[quant];
	int * vec_aux = new int[quant];
	

	while( quant != 0){
		int response = 0;
		int b = 0;
		while(quant--){

		scanf("%d", &vec[b]);
		b++;
	}

		response += vec[0];
		vec_aux[0] = vec[0];
		int j = 1;
		for(int i = 1; i < aux; i++){
			int pos = exists(vec_aux, vec[i], aux);
			if(pos == -1){

				response += vec[i] + j;
			}else{
				response += (j - pos);

			}

			vec_aux[j] = vec[i];
			j++;
		
		

		}

		cout << response << endl;
		scanf("%d", &quant);
		vec = new int[quant];
		vec_aux = new int[quant];
		aux = quant;
	
	


	}
	

}
