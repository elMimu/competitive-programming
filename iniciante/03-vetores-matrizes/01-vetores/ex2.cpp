#include<iostream>

using namespace std;

int main(){
	int N, campo[55], R[55];

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> campo[i];	
	}
	
	for(int i = 0; i< N; i++){

		int k = 0;

		if(campo[i] == 1) k++;

		if((campo[i + 1]) == 1 && i != (N-1)) k++;

		if((campo[i - 1]) == 1 && i != 0) k++;

		R[i] = k;	
	
	}

	for (int i = 0; i <  N; i++){
		cout << R[i] << "\n";
	}

	return 0;
}
