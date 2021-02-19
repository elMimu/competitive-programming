#include<iostream>

using namespace std;

int main(){
	int N, L, C, quebrados = 0, i = 1;
	cin >> N;

	while( i <= N){
		cin >> L >> C;

		if( L > C){
			quebrados = quebrados + C;	
		}
		i++;
	}

	cout << quebrados << "\n";
	
	return 0;
}
