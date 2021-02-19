#include<iostream>

using namespace std;

int main(){
	int N, L, A, i = 0, dias = 0, total = 0;
	
	cin >> N;

	while( i < N ){
		cin >> A;
		if( total < 1000000){
			dias++;
		}
		total = total + A;
		i++;
	}

	cout << dias << "\n";

	return 0;
}
