#include<iostream>

using namespace std;

int main(){
	int N, A = 0, B = 0;
	cin >> N;

	for(int i = 1; i <= N; i++){
		int S;
		cin >> S;	

		if(S == 1){
			if(A == 0){
				A = 1;
			}
			else {
				A = 0;
			}
		}
		
		else{
			if(A == 0 && B == 0){
				A = 1;
				B = 1;
			}
			else if(A == 1 && B == 0){
				A = 0;
				B = 1;
			}
			else if(A == 0 && B == 1){
				A = 1;
				B = 0;
			}
			else{
				A = 0;
				B = 0;
			}
		}
	}

	cout << A << "\n" << B << "\n";

	return 0;
}
