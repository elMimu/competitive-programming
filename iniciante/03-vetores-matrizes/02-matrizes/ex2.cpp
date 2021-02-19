#include<iostream>

using namespace std;

int M[1010][1010];

int main(){

	int N, peso = 0;;
	cin >> N;

	for(int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> M[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			int aux = 0;
			int somaLinha = 0;
			int somaColuna = 0;
			
			for(int k = 0; k < N; k++){
				somaLinha += M[j][k];
				somaColuna += M[k][j];
			}

			//if((somaLinha + somaColuna - (2*M[i][j])) > peso){
				aux = somaLinha + somaColuna - (2*M[i][j]);
				cout << aux << " ";
			//}	
		}
		cout << "\n";
	}


	//cout << peso << "\n";

	return 0;
}
