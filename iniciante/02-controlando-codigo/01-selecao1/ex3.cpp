#include<iostream>

using namespace std;

int main(){
	int Bino, Cino;
	cin >> Bino >> Cino;

	if((Bino + Cino)%2 == 0){
		cout << "Bino\n";
	}
	else{
		cout << "Cino\n";
	}
	return 0;
}
