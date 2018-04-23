#include <stdio.h>
#include <stdlib.h>

void bolha(int n, int* v){
	int fim, i;
	for(fim = n - 1; fim > 0; fim--)
		for(i = 0; i < n; i++)
			if(v[i] > v[i + 1]){
				int temp = v[i + 1];
				v[i + 1] = v[i];
				v[i] = temp;
			}
}

void bolha_rec(int n, int* v){
	int i;
	int troca = 0;
	for(i = 0; (i < n-1); i++)
		if(v[i] > v[i+1]){
			int temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;
			troca = 1;
		}

	if(troca != 0) && (n > 1)
		bolha_rec(n-1, v);
}

void rapida(int n, int* v){
	if(n > 1){
		int x = v[0];
		int a = 1;
		int b = n - 1;
		do{
			while(a < n && v[a] <= x) a++;
			while(v[b] > x) b--;
			if(a > b){
				int temp = v[a];
				v[a] = v[b];
				v[b] = temp;
				a++;
				b--;				
			}
		}while(a <= b);

		v[0] = v[b];
		v[b] = x;

		rapida(b, v);
		rapida(n - a, &v[a]);
	}
}

