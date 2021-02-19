#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 5;
int seg[4*N + 10];

void imprime_vector(vector <char> v){
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i];
	}
	cout << endl;
}

void clear(int v[], int n){
	for(int i = 0; i <= n; i++){
		v[i] = 1;
	}
}

int sinal(int x){
	if(x > 0) return 1;
	else if(x < 0) return -1;
	else return 0;
}

void atualiza(int no, int i, int j, int posicao, int novo_valor, int n){
	if(i == j){ 
		seg[no] = novo_valor; 
	}
	else{
		int esquerda = 2*no;	
		int direita = 2*no + 1;

		int meio = (i + j)/2;
		
		if(posicao <= meio) atualiza(esquerda, i, meio, posicao, novo_valor,n);
		else atualiza(direita, meio + 1, j, posicao, novo_valor, n);

		seg[no] = seg[esquerda]*seg[direita];
	}

}

int produto(int no, int i, int j, int a, int b){
	// se o intervalo do nó estiver contido em A, B;
	if(a <= i && j <= b){
		return seg[no];
	}

	if(i > b || a > j){
		return 101;
	}

	int esquerda = 2*no;	
	int direita = 2*no + 1;
	
	int meio = (i + j)/2;	

	int resposta_esquerda = produto(esquerda, i, meio, a, b);
	int resposta_direita = produto(direita, meio + 1, j, a, b);

	if(resposta_esquerda == 101) return resposta_direita;
	if(resposta_direita == 101) return resposta_esquerda;

	return resposta_esquerda*resposta_direita;
}


int main(){
	int n, k; // num de elementos, num de turnos;

	while(cin >> n >> k){
		string resp;
		clear(seg, 4*n + 10);
		char op;
		//memset(seg, -1, sizeof(seg));	

		for(int i = 1; i <= n; i++){
			int temp;
			cin >> temp;
			temp = sinal(temp);
			atualiza(1, 1, n, i, temp, n);
		}

		for(int i = 0; i < k; i++){
			cin >> op;
			if(op == 'C'){
				int posicao, novo_num;		
				cin >> posicao >> novo_num;
				novo_num = sinal(novo_num);
				atualiza(1, 1, n, posicao, novo_num, n);	
			}
			else{
				int a, b, prod;
				cin >> a >> b;
				
				prod = produto(1, 1, n, a, b);	

				if(prod == 0) resp = resp += '0';
				else if(prod > 0) resp = resp +='+';
				else{
					resp = resp += '-';
				}
				
			}
		}
		cout << resp << endl;
	}

	return 0;
}
