#include<iostream>

using namespace std;

int main(){
	int N, S, A = 0, B = 0;
	cin >> N;

	for( int i = 0; i < N; i++){
		cin >> S;
		if(S == 1){
			A = 1 - A;
		}
		else{
			A = 1 - A;
			B = 1 - A;
		}
	}

	cout << A << "\n" << B << "\n";

	return 0;
}
