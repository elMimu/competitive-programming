#include <iostream>

#define MAXN 100100

using namespace std;

int busca_faixa(int faixas[],int N, int pts_ogro){
	int ini = 1, fim = N - 1, meio;

	while(ini <= fim){
		meio = (ini + fim)/2;

		if(faixas[meio] == pts_ogro) return meio;
		if(faixas[meio] < pts_ogro) ini = meio + 1;
		if(faixas[meio] > pts_ogro) fim = meio - 1;
	}
	
	if(faixas[meio] > pts_ogro) return meio - 1;
	else return meio;
}

int main(){
	int N, M; // número de faixas de premiações e número de ogros	
	cin >> N >> M;
	int faixas[MAXN];
	int pontuacao[N + 10];
	int ranking[M + 10];

	for(int i = 1; i < N; i++){
		cin >> faixas[i];
	}
	
	for(int i = 0; i < N; i++){
		cin >> pontuacao[i];
	}

	
	for(int i = 1; i <= M; i++){
		int pts_ogro;
		cin >> pts_ogro;
		//busca a faixa de pontuacao
		ranking[i] = pontuacao[busca_faixa(faixas, N, pts_ogro)];			
		
	}

	for(int i = 1; i <= M; i++){
		if(i < M) cout << ranking[i] << " ";
		else cout << ranking[i] << "\n";

	}

	return 0;
}
