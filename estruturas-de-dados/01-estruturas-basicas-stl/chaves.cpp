#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	int N; 
	cin >> N; // quantidade de linhas no codigo;
	stack <char> pilha;

	// laço pra cada N -> linha do codigo;
	for(int i = 0; i <= N; i++){
		string linha; 
		getline(cin, linha);
		
		for(int j = 0; j < linha.size(); j++){
			if(linha[j] == '{') pilha.push(linha[j]);
			else if(linha[j] == '}'){
				if(pilha.empty()){
					cout << "N" << endl;
					return 0;
				}
				else if(pilha.top() == '{'){
					pilha.pop();
				}
				else {
					cout << "N" << endl;
					return 0;
				}
			}
		}
	}

	if(pilha.empty()) cout << "S" << endl;
	else cout << "N" << endl;
						
	return 0;
}
