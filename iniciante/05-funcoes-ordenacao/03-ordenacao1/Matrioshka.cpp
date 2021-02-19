#include<iostream>
#include<algorithm>

using namespace std;

void ImprimeVetor(int v[], int TAM){
	for(int i = 0; i < TAM; i++){
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main(){
	int desordenado[100010],ordenado[100010],retirado[100010];
	int N, contador = 0;

	cin >> N;

	for(int i = 0; i < N; i ++){
		cin >> desordenado [i];
		ordenado[i] = desordenado[i];
	}

	sort(ordenado, ordenado + N);

	if(N == 1) contador = 0;
	else{
		for(int i = 0; i < N; i ++){
			if(desordenado[i] != ordenado[i]){
				retirado[contador] = ordenado[i];
				contador++;
			}
		}
	}

	cout << contador << "\n";
	ImprimeVetor(retirado, contador);


	return 0;
}
