#include <stdio.h>

//implementando a ordena��o bubble sort

void bubble_sort(int vetor[], int tam){

	//vari�vel auxiliar
	int proximo = 0;

	//varrer todo vetor externo
	for(int i = 0; i < tam; i++){
		//traba.har com os pr�ximos elementos
		for(int j = 0; j < (tam - 1); j++){
			//Ocorre a troca
			if(vetor[j] > vetor[j+1]){
				proximo = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j+1] = proximo;
			}
		}
	}
}

int main(){

	//vetor desordenado
	int vetor[6] = {8, 3, 1, 42, 12, 5};

	//Fun��o de ordena��o utilizando bubble sort
	bubble_sort(vetor, 6);

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
