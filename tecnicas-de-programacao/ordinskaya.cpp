#include <iostream>

#define MAXN 10010

using namespace std;

int max(int a, int b){
	if(a > b) return a;	
	else return b;
}

int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int verifica_anterior(int v[], int indice, int M){
	if(min(v[indice], M - v[indice]) >= v[indice - 1]) 
		return min(v[indice], M-v[indice]);
	else if(max(v[indice], M - v[indice]) >= v[indice - 1])
		return max(v[indice], M - v[indice]);
	else return -1;
}


int main(){
	int N, M, soma = 0, mergulhos[MAXN];

	cin >> N >> M;

	cin >> mergulhos[0];
	soma += min(mergulhos[0], M - mergulhos[0]);

	for(int i = 1; i < N; i ++){
		cin >> mergulhos[i];
		mergulhos[i] = verifica_anterior(mergulhos,i,M);		
		if(mergulhos[i] == - 1){
			soma = -1;
			break;
		}
		soma += mergulhos[i];
	}

	cout << soma << "\n";

	return 0;
}
