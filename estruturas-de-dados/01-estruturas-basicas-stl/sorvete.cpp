#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void imprime_vector(vector< pair<int,int> > v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << " " <<  v[i].second << endl;

	}
	cout << endl;
}

int main(){
	int P, S; // comprimento praia e sorveteiros
	// crio vector de pair com o trecho percorrido pelo sorveteiro pra receber a entrada;
	cin >> P >> S;
	vector< pair<int,int> > sorveteiro;

	for(int i = 0; i < S; i++){
		int u, v;
		cin >> u >> v;
		sorveteiro.push_back(make_pair(u,v));
	}

	sort(sorveteiro.begin(), sorveteiro.end());

	vector< pair<int, int> > trecho;

	if(!sorveteiro.empty()){

		//percorrer o vector com os sorveteiros
		int u, v;	
		u = sorveteiro[0].first;
		v = sorveteiro[0].second;


		for(int i = 0; i <= S; i++){
			if(v >= sorveteiro[i].first && i != S){ // se o trecho fim do sorveteiro atual for maior ou igual ao do inicio do proximo
				if(v < sorveteiro[i].second){ // se o trecho fim do sorveteiro atual for menor que o trecho final do segundo
					v = sorveteiro[i].second;
				}
				continue;
			}

			// se o trecho final do sorveteiro atual for menor que o trecho inicial do proximo
			// adiciona no vector trecho;

			trecho.push_back(make_pair(u,v));
			u = sorveteiro[i].first;
			v = sorveteiro[i].second;
		}

		imprime_vector(trecho);
	}

	return 0;
}
