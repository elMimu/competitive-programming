#include <iostream>

#define MAXN 100010

using namespace std;

int pai[MAXN], peso[MAXN];

int find(int x){
	if(pai[x] == x) return x;
	
	pai[x] = find(pai[x]);

	return pai[x];
}

void join(int x, int y){
	// o patriarca de x receberá o velor do patriarca de y
	x = find(x); // x recebe o patriarca de x
	y = find(y); // y recebe o patriarca de y

	if(x == y) return;

	if(peso[x] < peso[y]){
		pai[x] = y;
	}
	
	if(peso[x] > peso[y]){
		pai[y] = x;
	}
	
	if(peso[x] == peso[y]){
		pai[x] = y;

		peso[y]++;
	}
}

int main(){
	int n, k, banco1, banco2; // numero de bancos e numero de operacoes efetuadas
	char op;
	cin >> n >> k; // recebe as variáveis;
	
	// primeiro preciso me certificar que cada elemento de pai seja pai ele mesmo (pai[i] == i);

	for(int i = 1; i <= n; i++){
		pai[i] = i;
	}

	// Entrada
	// recebe a operação e o numero dos bancos;

	for(int i = 1; i <= k; i++){
		cin >> op >> banco1 >> banco2;

		if(op == 'F'){
			join(banco1, banco2);
		}
		else{
			if(find(banco1) == find(banco2)){
				cout << "S\n";
			}
			else{
				cout << "N\n";
			}
		}
			
	}


	return 0;
}
