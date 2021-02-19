#include <iostream>
#include <vector>

#define MAXN 50010

using namespace std;

void imprime_vector(vector< long long int> v){
	for(int i = 0; i < (int)v.size(); i++){
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main(){
	int N, M;
	vector<long long int> fila;
	cin >> N;

	for(int i = 0; i < N; i++){
		long long int tmp;
		cin >> tmp;
		fila.push_back(tmp);
	}

 	cin >> M;
	
 	for(int i = 0; i < M; i++){
		long long int tmp;
		cin >> tmp;
		for(int j = 0; j < N; j++){
			if(fila[j] == tmp){
				fila.erase(fila.begin() + j);
				break;
			}
		}
	}

	imprime_vector(fila);

	return 0;
}
