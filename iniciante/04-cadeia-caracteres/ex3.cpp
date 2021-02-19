#include<iostream>

using namespace std;

int algarismos[12];

int main(){
	int N; 
	cin >> N;
	
	for(int i = 0; i < N; i ++){
		string num;
		cin >> num;
		for(int j = 0; j < num.size(); j++){
			algarismos[((int)num[j])- 48]++;
		}
	}

	for(int i = 0; i < 10; i++){
		cout << i << " - " << algarismos[i] << "\n";
	}

	cout << "\n";
	
	return 0;
}
