#include <stdio.h>

int main() {
	int vet[8] = {4,11,8,2,15,18,24,31};
	int menor, aux;
	
	for(int i=0; i < 8; i++){
		menor = i;
		for(int j=i+1; j<8; j++){
			if(vet[j] < vet[menor]){
				menor = j;
			}
		}
		aux = vet[i];
		vet[i] = vet[menor];
		vet[menor] = aux;
	}
	
	for(int i=0; i<8; i++) {
		printf("%d ", vet[i]);
	}
	return 0;
}
