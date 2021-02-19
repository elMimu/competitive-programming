#include<iostream>

using namespace std;

int main(){
	string risada, vogais;
	char resultado = 'S';
	cin >> risada;

	for(int i = 0; i < risada.size(); i++){
		if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
			vogais += risada[i];		
		}
	}

	int k = 0; // contador;

	for(int j = risada.size(); j >= 0; j--){
		if(risada[j] == 'a' || risada[j] == 'e' || risada[j] == 'i' || risada[j] == 'o' || risada[j] == 'u'){
			if(risada[j] == vogais[k]){
				k++;
			}
			else{
				resultado = 'N';	
				break;
			}
		}
	}

	cout << resultado << "\n";

	return 0;
}
