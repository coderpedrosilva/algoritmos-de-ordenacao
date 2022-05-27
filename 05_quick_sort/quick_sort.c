#include <stdio.h>

//implementando a ordena��o quick sort

void quick_sort(int vetor[], int tam){
	int i, j, grupo, troca;

	//Crit�rio de parada da recursividade
	if(tam < 2){
		return; // sai da fun��o
	}else{
		grupo = vetor[tam/2];
	}

	//fazendo um loop se comportar como dois
	for(i = 0, j = tam -1;; i++, j--){

		//Fazendo a movimenta��o dos elementos no vetor
		while(vetor[i] < grupo){
			i++;
		}
		//Fazendo a movimenta��o dos elementos no vetor
		while(grupo < vetor[j]){
			j--;
		}
		//Crit�rio de parada do loop
		if(i >= j){
			break;
		}else{
			//Onde ocorrem as trocas
			troca = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = troca;
		}
	}
	//Usar a recursividade para ordenar os grupos
	quick_sort(vetor, i);
	quick_sort(vetor + i, tam - i);
}

int main(){

	//vetor desordenado
	int vetor[6] = {8, 3, 1, 42, 12, 5};

	//Fun��o de ordena��o utilizando quick sort
	quick_sort(vetor, 6);

	//Apresentar vetor ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
