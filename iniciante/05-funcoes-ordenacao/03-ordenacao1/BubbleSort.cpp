#include<iostream>
#define TAM 5

using namespace std;

void BubbleSort(int v[]){
	int ordenado = 0;

	while(ordenado == 0){
		ordenado = 1;

		for(int i = 0; i < TAM-1; i++){
			if(v[i] > v[i+1]){
				int tmp = v[i];
				v[i] = v[i+1];
				v[i+1] = tmp;
				ordenado = 0;
			}
		}
	}
}

int main(){
	int vetor[TAM];
	
	for(int i = 0; i < TAM; i++){
		cin >> vetor[i];
	}

	BubbleSort(vetor);

	for(int i = 0; i < TAM; i++){
		cout << vetor[i] << " ";
	}
	cout << "\n";

	return 0;
}
