#include <iostream>
#include <map>

using namespace std;

int main(){
	// plano:
	int C, N;
	cin >> C >> N;
	// criar dois maps 
	map<int, int> empresa;
	map<int, int> atualizados;

	for(int i = 0; i < C; i++){
		int programa, versao;
		cin >> programa >> versao;

		empresa.insert(make_pair(programa, versao));
	}

	for(int i = 0; i < N; i++){
		int programa, versao;
		cin >> programa >> versao;

		if(empresa[programa] < versao){
			empresa[programa] = versao;

			if(atualizados.find(programa) == atualizados.end()){
				atualizados.insert(make_pair(programa, versao));
			}
			else{
				atualizados[programa] = versao;
			}

		}	
		
	}

	for(map<int, int>::iterator it = atualizados.begin(); it != atualizados.end(); it++){
		cout << it -> first << " " << it -> second << endl;
	}

	return 0;
}
