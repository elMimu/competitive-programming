#include<iostream>

using namespace std;

int A[15][15];

int main(){
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> A[i][j];
		}
	}


	int diagonal1 = 0;
	int diagonal2 = 0;
	int aux;

	for(int i = 0; i < N; i++){
		int somaLinha = 0;
		int somaColuna = 0;
		for(int j = 0; j < N; j++){
			// soma dos elementos nas linhas
			somaLinha += A[i][j];
			somaColuna += A[j][i];	
			if(i == j) diagonal1 += A[i][j];
			if(j == (N-1-i)) diagonal2 += A[i][j];
			
		}
		
		if(i==0){
			if(somaLinha == somaColuna){
				aux = somaLinha;
			}
			else {
				aux = -1;
				break;
			}
		}
		else{
			if(aux == somaLinha && aux == somaColuna){
				aux = somaLinha;
			}
			else{
				aux = -1;
				break;
			}
		}
	
	}

	if(aux != -1){
		if(diagonal1 == diagonal2 && diagonal1 == aux)	cout << aux << "\n";
	}else cout << aux << "\n";

	return 0;
}
