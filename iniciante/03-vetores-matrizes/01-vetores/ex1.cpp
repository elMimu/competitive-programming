#include<iostream>

using namespace std;

int main(){
	int N;
	int k = 0;
	int R[10010];
	
	cin >> N;

	for( int i = 0; i < N; i++){
		cin >>  R[i];
	}

	for(int i = 0; i < N; i++){
		if(R[i] == 1 && i < N - 2){
			if( R[i + 1] == 0 && R[i + 2] == 0){
				k++;
				i = i + 2;
			}
		}
	}

	cout << k << "\n";
	return 0;
}
