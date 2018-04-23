#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{
	char nome[81];
	float valor_hora;
	int horas_mes;
};
typedef struct funcionario Funcionario;

Funcionario* busca(int n, Funcionario** v, char *nome){
	int ini = 0;
	int fim = n - 1;

	while(ini <= fim){
		int meio = (ini + fim) / 2;

		if(strcmp(v[meio]->nome, nome) == -1)
			fim--;
		else if(strcmp(v[meio]->nome, nome) == 1)
			fim++;
		else
			return v[meio];
	}

	return NULL;
}