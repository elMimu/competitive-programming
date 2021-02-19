#include<iostream>
#include<set>

using namespace std;

int qtd_trocas(set<int> A, set<int> B){
	set<int>:: iterator it = A.begin();
	set<int> trocas;

	while(it !=  A.end()){
		int tmp = *it;	
		if(B.find(tmp) == B.end()){
			trocas.insert(tmp);
		}
		it++;
	}

	return trocas.size();
}

int main(){
	int A, B; // Recebe a qtd de alice e beatriz
	set<int> alice, beatriz;
	cin >> A >> B;

	for(int i = 0; i < A; i++){
		int tmp;
		cin >> tmp;
		alice.insert(tmp);
	}

	for(int i = 0; i < B; i++){
		int tmp;
		cin >> tmp;
		beatriz.insert(tmp);
	}

	int trocas_A = qtd_trocas(alice, beatriz);
	int trocas_B = qtd_trocas(beatriz, alice);

	if(trocas_A > trocas_B) cout << trocas_B << endl;
	else cout << trocas_A << endl;
	
	return 0;
}
