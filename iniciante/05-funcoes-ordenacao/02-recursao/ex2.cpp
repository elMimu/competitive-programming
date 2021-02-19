#include<iostream>

using namespace std;

int hanoi(int x){
	if(x == 1) return 1;
	return 2*hanoi(x - 1) + 1;
}

int main(){
	int N = 1;
	for(int i = 1; N >= 1; i++){
		cin >> N;
		if(N == 0) break;
		cout << "Teste " << i << "\n" << hanoi(N) << "\n" << endl;
	}

	return 0;

	}
