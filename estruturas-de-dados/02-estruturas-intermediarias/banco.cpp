#include <iostream>
#include <queue>

using namespace std;

int main(){
	int c, n, qtd = 0; // número de caixas na agência, num de clientes que vão procurar a agencia
	cin >> c >> n;
	//criar priority queue que vai receber os caixas

	priority_queue< int> caixas;

	for(int i = 0; i < c; i++){
		caixas.push(0);
	}

	for(int i = 0; i < n; i++){
		pair <int, int> user;
		int espera;
		cin >> user.first >> user.second;

		int atendimento = caixas.top();
		caixas.pop();
		
		if(-user.first > atendimento){
			espera = atendimento + user.first;	
			if(espera < -20){
				qtd++;
			}
		}
		else{
			atendimento = -(user.first + user.second);	
			caixas.push(atendimento);
			continue;
		}

		atendimento -= user.second;

		caixas.push(atendimento);
	
	}

	cout << qtd << endl;

	return 0;
}
