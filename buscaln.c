#include <stdio.h>
#include <stdlib.h>

int busca(int n, int* vet, int elem){
	int i;

	for(i = 0; i < n; i++){
		if(vet[i] == elem)
			return i;
	}

		return -1;
}

int busca_ord(int n, int* vet, int elem){
	int i;

	for(i = 0; i < n; i++){
		if(vet[i] == elem)
			return i;

		else if(elem < vet[i])
			return -1;
	}

		return -1;	
}

int busca_bin(int n, int* vet, int elem){
	int ini = 0;
	int fim = n-1;

	while (ini <= fim){
		int meio = (ini + fim)/2;
		if(elem < vet[meio])
			fim = meio - 1;
		else if(elem > vet[meio])
			fim = meio + 1;
		else
			return meio;
	}
	return - 1;
	}
}