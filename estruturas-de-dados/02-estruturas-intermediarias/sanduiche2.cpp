#include <iostream>
#include <vector>

using namespace std;

int conta_maneiras(vector<int> v, int d, int n){
	// declara os ponteiros para a primeira posição
	int i = 0, j = 0, qtd = 0;
	long long int sum = 0;

	while( i < n && j < (int) v.size()){
		// os ponteiros não podem se afastar mais que o tamanho do vetor
		if( j - i > n){
			sum -= v[i];	
			i++;
			continue;
		}

		if(sum > d){
			sum -=v[i];
			i++;
		}
		else if(sum < d){
			sum += v[j];	
			j++;
		}
		else{
			//cout << i << " " << j << endl;
			qtd++;
			sum -= v[i];
			i++;
		}
	}

	return qtd;
}

int main(){


	int n, d; // qtd pedacos, qtd comida;
	cin >> n >> d;

	vector<int> v(2*n);
	
	for(int i = 0; i < n; i++) {
		cin >>v[i];
		v[i+n] = v[i];
	}

	cout <<conta_maneiras(v, d, n) << endl;

	return 0;
}

