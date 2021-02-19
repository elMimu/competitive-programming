#include <iostream>

#define MAXN 100010

using namespace std;

int pai[MAXN], peso[MAXN];

int find(int x){
	//encontrar patriarca do conjunto de x ("pai dele mesmo");	
	if(pai[x] == x) return x;

	return pai[x] = find(pai[x]);	
}

void join_guild(int x, int y, int pontos[]){
	//busco ambos patriarcas
	x = find(x);
	y = find(y);

	if(pai[x] == pai[y]) return;

	if(peso[x] > peso[y]){
		pai[y] = x;
		pontos[x] += pontos[y];
	}

	if(peso[x] < peso[y]){
		pai[x] = y;
		pontos[y] += pontos[x];
	}

	if(peso[x] == peso[y]){
		pai[y] = x;
		peso[x]++;
		pontos[x] += pontos[y];
	}
}

int main(){
	int n, m, pontos[MAXN]; 
	cin >> n >> m;

	while(n != 0 && m != 0){

		for(int i = 1; i <= n; i++){
			pai[i] = i;
			cin >> pontos[i];
		}

		int q, a, b, qtd = 0; 
		// tipo de ação, guilda1, guilda2, qtd em que 1 vence batalhas;

		//recebo m ações e faço as análies correspondentes;

		for(int i = 1; i <= m; i++){
			cin >> q >> a >> b;

			if(q == 1){ // se q = 1, funde guildas de a e b
				join_guild(a,b, pontos);
			}
			else{
				int pai_de1 = find(1);
				a = find(a);
				b = find(b);
				//cout << pontos[a] << " " << pontos[b] << endl;

				if(pontos[a] > pontos[b]){
					if(pai_de1 == a) qtd++;
				}
				if(pontos[a] < pontos[b]){
					if(pai_de1 == b) qtd++;
				}
			}
		}
		cout << qtd << endl;
		cin >> n >> m;
	}

	return 0;
}
