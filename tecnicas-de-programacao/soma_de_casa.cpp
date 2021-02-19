#include <iostream>

#define MAXN 100100

using namespace std;

int bbin(int v[], int N, int x){
	int ini = 1, fim = N, meio;

	while(ini <= fim){
		meio = (ini + fim)/2;

		if(v[meio] == x) return meio;
		if(v[meio] < x) ini = meio + 1;
		if(v[meio] > x) fim = meio - 1; 
	}

	return -1;
}

int main(){
	int N, K, casas[MAXN];
	cin >> N;		

	for(int i = 1; i <= N; i++){
		cin >> casas[i];
	}

	cin >> K;

	for(int i = 1; i <= N; i++){
		int	casa_menor = casas[i];
		int casa_maior = bbin(casas, N, K - casa_menor);

		if(casa_maior != -1){
			casa_maior = casas[casa_maior];
			cout << casa_menor << " " << casa_maior << endl;
			break;
		}
	}
	
	return 0;
}
