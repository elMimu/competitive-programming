#include<iostream> // cin e cout

using namespace std;

int main(){
	int A, B; // Declaro as variáveis A e B
	cin >> A >> B;// recebe os valores do teclado para A e B

	int i = A; // cria um contador que inicia com o mesmo valor de A
	while( i <= B){ // enquanto i for menor ou igual a B
		if( i%2 == 0){ // se o i for par
			cout << i << " "; // imprima o valor de i
		}
		i = i + 1; // incremento de 1
	}

	cout << "\n"; // quebra de linha

	return 0;
}
