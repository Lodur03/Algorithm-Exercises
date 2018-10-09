/**
*	TRABALHO LPA
*	ALUNO: FELIPE COELHO SILVA, LEONARDO ANDRADE FERREIRA PALIS
	EXERCICIO: Esquerda, Volver! (Problema B) - aquecimento
**/
#include <iostream>
#include <string>
#include <stdio.h>

#define NORTE 0
#define LESTE 1
#define SUL 2
#define OESTE 3

using namespace std;


int mod (int x, int y){

    while( x < 0){
        x += y;
    }
    while(x >=4 ){
        x -= y;
    }
    return x;

}

int main()
{
    int elements;
    int i = 0;
    string command;
    scanf("%d", &elements);
    while( elements != 0){
        int j = 0;
        i = 0;
        cin >> command;
        while(elements--){
                switch(command[i]){
                    case 'D':
                        j++;
                        break;
                    case 'E':
                        j--;
                        break;
                }
                i++;
        }

        int response =  mod(j,4);

        if(response == NORTE) cout << "N\n";
        else if(response == LESTE) cout << "L\n";
        else if(response == SUL) cout << "S\n";
        else if(response == OESTE) cout << "O\n";
        scanf("%d", &elements);
    }
    return 0;
}
