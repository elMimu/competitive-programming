#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int N;
	double X;
	cin >> N;
	
	cout.precision(4);
	cout.setf(ios::fixed);

	for(int i = 0; i < N; i++){
		cin >> X;	
		cout << sqrt(X) << "\n";
	}

	return 0;
}
