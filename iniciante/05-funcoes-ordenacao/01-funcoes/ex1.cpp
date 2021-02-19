#include<iostream>

using namespace std;

string title(string F){
	for(int i = 0; i < F.size(); i++){
		if(i == 0 || F[i-1] == ' '){
			if(F[i] >= 'a' && F[i] <= 'z'){
				F[i] = F[i] - 32;
			}
		}
		else{
			if(F[i] >= 'A' && F[i] <= 'Z'){
				F[i] = F[i] + 32;
			}
		}
	}
	return F;
}

int main(){

	string F;

	getline(cin, F);

	cout << title(F) << "\n";

	return 0;
}
