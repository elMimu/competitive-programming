#include <iostream>
#include <set>

using namespace std;

int main(){
	int C, fabricados = 0;
	set<int> estoque;

	cin >> C;

	for(int i = 0; i < C; i++){

		int tamanho;
		cin >> tamanho;
		
		if(estoque.find(tamanho) != estoque.end()){
			estoque.erase(tamanho);
		}
		else{
			estoque.insert(tamanho);
			fabricados += 2;
		}
	}

	cout << fabricados << endl;

	return 0;
}
