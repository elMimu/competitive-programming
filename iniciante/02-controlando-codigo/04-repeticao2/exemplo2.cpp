#include<iostream> // cin e cout

using namespace std;

int main(){

	for(int i = 1; i <= 100; i++){ // Repete uma sequência de comandos 100 vezes
		if(i % 7 == 0){ // Caso i seja múltiplo de 7 
			continue; // pula para a próxima iteração do laço
		}

	cout << i << " ";// imprime o i

	}

	cout << "\n";

	return 0;
}
