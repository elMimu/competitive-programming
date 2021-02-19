#include<iostream>
#include<algorithm>

using namespace std;

struct Pais{
	int indice = 0, ouro = 0, prata = 0, bronze = 0;
};

bool comparaPaises(Pais a, Pais b){
	if(a.ouro == b.ouro){
		if(a.prata == b.prata){
			if(a.bronze == b.bronze){
				return a.indice < b.indice;
			}
			else return a.bronze > b.bronze;
		}
		else return a.prata > b.prata;
	}
	else return a.ouro > b.ouro;
}

void imprimeResultado(Pais a[], int N){
	for(int i = 1; i <= N; i++){
		cout << a[i].indice <<" ";
	}
	cout << "\n";
}

/*void imprimeTabela(Pais a[], int N){
  for(int i = 1; i <= N; i++){
  cout << a[i].indice << "    " << a[i].ouro << " " << a[i].prata << " " << a[i].bronze << "\n";
  }
  cout << "\n";
  }*/


int main(){
	Pais paises[110];
	int N, M;
	cin >> N >> M;

		for(int i = 1; i <= N; i++){
			paises[i].indice = i;
		}

		for(int i = 1; i <= M; i++){
			int po, pp, pb;
			cin >> po >> pp >> pb;
			paises[po].ouro++;
			paises[pp].prata++;
			paises[pb].bronze++;
		}

		sort(paises + 1, paises + (N + 1),comparaPaises);

		//	imprimeTabela(paises, N);

		imprimeResultado(paises, N);

	
	return 0;
}
