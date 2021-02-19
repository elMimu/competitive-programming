#include <iostream>
#include <queue>

#define MAX 16

using namespace std;

int main(){
	queue<char> selecoes;
	char nome = 'A';
	
	for(int i = 0; i < 16; i++){
		selecoes.push(nome);
		nome++;
	}

	while(selecoes.size() != 1){
		int gols_a, gols_b;
		cin >> gols_a >> gols_b;

		if(gols_a > gols_b){
			char p = selecoes.front();
			selecoes.push(p);
			selecoes.pop();
			selecoes.pop();
		}
		else{
			selecoes.pop();
			char p = selecoes.front();
			selecoes.push(p);
			selecoes.pop();
		}
	}

	cout << selecoes.front() << endl;

	return 0;
}
