#include<iostream>

using namespace std;

int fibs(int x){
	if(x < 2) return 1;
	return fibs(x - 1) + fibs(x - 2);
}

int main(){
	int N;
	cin >> N;
	
	cout << fibs(N) << "\n";

	return 0;
}
