#include<iostream>

using namespace std;

int main(){
	int N, valores, aux, k = 1, j = 1;
	cin >> N;

	for(int i = 1; i <= N; i++){
		aux = valores;
		cin >> valores;	

		if(valores == aux){
			k++;
		}
		else{
			if(k >= j ){
				j = k;
			}	
			k = 1;
		}
	}

	if(k >=j) j=k;
	
	cout << j << "\n";

	return 0;
}
