#include<iostream> // cin e coutk

using namespace std;

int main(){

	int var;

	for(int i = 1; i <= 10; i++){ // repete uma sequencia de comando 10 vezes
		cin >> var;// Ler um valor e armazena em var

		if(var == 0 ){// se o valor for igual a zero
			break;// encerra o for
		}

		cout << 2*var << "\n";
	}

	return 0;
}
