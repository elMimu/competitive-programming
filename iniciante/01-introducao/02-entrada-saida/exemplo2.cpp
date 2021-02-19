#include<iostream> // cin e cout;

using namespace std;

int main(){

	double raio;// declaro a variável raio do tipo double;

	cin >> raio;// recebe o valor da tela para a variável raio;

	double pi; // declara a variável pi do tipo double;

	pi=3.14159;// atribui o valor para a variável pi;

	cout.precision(2); // indico a precisão que quero na saída;
	cout.setf(ios::fixed);

	cout << "A area eh " << raio*raio*pi << "\n";// Imprimo a frase "A área eh " seguida do valor da área
												// com precisão de duas casas decimais e a quebra de linha;

	return 0;
}
