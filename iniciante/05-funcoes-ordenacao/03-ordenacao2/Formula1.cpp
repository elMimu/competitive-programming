#include<iostream>
#include<algorithm>

using namespace std;

struct Tabela{
	int indice;	
	int pontos = 0;
}

int GP[110][110];

void imprimeMatriz(int A[][110], int m, int n){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	
	int num_gps, num_pilotos;
	cin >> num_gps >> num_pilotos;

	for( int i = 1; i <= num_gps; i++){
		piloto[i].indice = 1;
		for(int j = 1; j<= num_pilotos; j++){
			cin >> GP[i][j];
		}
	}

//	imprimeMatriz(GP, num_gps, num_pilotos);
	
	int Sistema;
	int k;
	cin >> Sistema;
	int pontuacao;

	for(int i = 1; i <= Sistema; i++){
		cin >> k;
		Pilotos piloto[110]
		for(int j = 1; j <= k; j++){
			cin >> pontuacao;			
			indice[GP[i][j]].pontos += pontuacao;
		}
	}
	
			
	return 0;
}
