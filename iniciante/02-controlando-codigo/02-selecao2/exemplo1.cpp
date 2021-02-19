#include<iostream> //cin e cout

using namespace std;

int main(){
	double altura;// declaro a variável n
	cin >> altura;// recebe o valor da altura do teclado

	if (altura > 1.8){
		cout << "Alta\n"; // A pessoa é considerada Alta
	}
	else if(altura > 1.5){
		cout << "Normal\n";// A pessoa é considerada Normal
	}
	else{
		cout << "Baixa\n";// A pessoa é considerada baixa
	}

	return 0;
}
