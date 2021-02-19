#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double X, Y;
	cin >> X >> Y;

	cout.precision(4);
	cout.setf(ios::fixed);

	cout << pow(X,Y) << "\n";
	
	return 0;
}
