#include<iostream>

using namespace std;

int A[15][15];

int main(){
	int N, diagonal1 = 0, diagonal2 = 0;

	cin >> N;
	
	for(int i = 0; i < N; i++){

		for(int j = 0 ; j < N; j++){
			cin >> A[i][j];
			
			if(j == i){
				diagonal1 += A[i][j];
			}

			if(j == ((N-1) - i) ){
				diagonal2 += A[i][j];
			}
		}

	}

	int aux = -1;

	if(diagonal1 == diagonal2){
		aux = diagonal1;
	}

	//cout << diagonal1 << "\n";
	//cout << diagonal2 << "\n";
	
	for(int i = 0; i < N; i++){

		int somaLinha = 0;
		int somaColuna = 0;

		for( int j = 0; j < N; j++){
			somaLinha += A[i][j];
			somaColuna += A[j][i];
		}
		//cout << somaLinha << "\n";
	 	//cout << somaColuna << "\n";


		if(somaLinha != somaColuna || somaLinha != aux){
			aux = -1;
			break;
		}
	}

	cout << aux << "\n";

	return 0;
}
