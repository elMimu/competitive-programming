#include<iostream>

using namespace std;

int main(){

	int x; // declaro a variável x;
	cin >> x; // recebe o valor do usuário para a variável x;

	if(x >= 5 && x <= 10){
		cout << "esta no intervalo\n";// se x estiver entre 5 e 10, imprimo ele está no intervalo;
	}else{
		cout << "não está no intervalo\n";// se não, imprimo que ele não está no intervalo
	}

	return 0;
}
