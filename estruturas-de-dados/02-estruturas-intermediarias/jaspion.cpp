#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void imprime_vector(vector<string> v){
	for(int i = 0; i < v.size(); i++){
		if(v[i] == "***"){
			cout << endl;
			continue;
		}
		cout << v[i] << endl;
	}
}

string traduzir(map<string,string> tradutor, string palavra){
	string traducao = palavra;

	if(tradutor.find(palavra) != tradutor.end()){
		traducao = tradutor[palavra]; 
	}

	return traducao;
}

int main(){
	int T;
	cin >> T;
	vector<string> traduzido;
	for(int k = 0; k < T; k++){
		int M, N; // num linhas
		cin >> M >> N;

		// cria tradutor

		map<string,string> tradutor;

		for(int i = 0; i < M; i++){
			string japones, portugues;
			cin >> japones;
			cin.ignore();
			getline(cin, portugues);

			tradutor.insert(make_pair(japones,portugues));

		}

		vector<string> separa;

		for(int i = 0; i < N; i++){
			string frase, palavra;
			getline(cin, frase);

			for(int j = 0; j <= frase.size(); j++){

				if(frase[j] == ' ' || j == frase.size()){
					separa.push_back(palavra);	
					if(j == frase.size()){
						separa.push_back("***");
						break;
					}
					palavra = frase[j + 1];	
					j++;
					continue;
				}
				palavra = palavra + frase[j];
			}
		}

		string traducao;		

		for(int i = 0; i < separa.size(); i++){
			if(separa[i] == "***"){
				traduzido.push_back(traducao);			
				string nova_linha;
				traducao = nova_linha;
				continue;
			}
			traducao = traducao + traduzir(tradutor, separa[i]);
			traducao = traducao + " ";
		}

		traduzido.push_back("***");
	}

	imprime_vector(traduzido);

	return 0;
}
