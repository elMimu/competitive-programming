#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	int elementos[100010], N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> elementos[i];
	}
	
	sort(elementos, elementos + N);

	for(int i = 0; i < N; i++){
		cout << elementos[i] << " ";
	}

	cout << "\n";
	

	return 0;
}
