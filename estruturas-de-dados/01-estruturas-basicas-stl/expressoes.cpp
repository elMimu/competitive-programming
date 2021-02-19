#include<iostream>
#include<stack>

using namespace std;

bool abre_e_fecha(char a, char b){
	if(a == '(' && b == ')') return true;
	else if(a == '[' && b == ']') return true;
	else if(a == '{' && b == '}') return true;
	else return false;
}

int main(){
	int T; // qtd de cadeias
	cin >> T;

	for(int i = 0; i < T; i++){
		string cadeia;
		cin >> cadeia;

		char resultado = 'S';

		stack <char> pilha;

		for(int i = 0; i < cadeia.size(); i++){
			if(cadeia[i] == '(' || cadeia[i] == '[' || cadeia[i] == '{'){
				pilha.push(cadeia[i]);
			}
			else{
				if(pilha.empty()) resultado = 'N';
				else if(abre_e_fecha(pilha.top(), cadeia[i])){
					pilha.pop();
				}
				else resultado = 'N';
			}
		}
		cout << resultado << endl;
	}

	return 0;
}
