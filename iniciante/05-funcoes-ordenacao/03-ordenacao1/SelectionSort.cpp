#include<iostream>
#include<math.h>
#define TAM 5

using namespace std;

#define INF 0x3f3f3f3f

void SelectionSort(int v[]){
	for(int i = 0; i < TAM; i++){
		int	menor = INF, indice_menor;
		for(int j = i; j < TAM; j++){
			if(menor > v[j]){
				menor = v[j];
				indice_menor = j;
			}
		}
		v[indice_menor] = v[i];
		v[i] = menor;
	}
}

int main(){
	int vetor[TAM];

	for(int i = 0; i < TAM; i++){
		cin >> vetor[i];
	}
	
	SelectionSort(vetor);

	for(int i = 0; i < TAM; i++){
		cout << vetor[i] << " ";
	}

	cout << "\n";

	return 0;
}
