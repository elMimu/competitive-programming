#include<iostream>

using namespace std;

int main(){
	int fita[10010];
	int colorido1[10010];
	int colorido2[10010];
	int N;

	cin >> N;
	
	for(int i = 1; i <= N; i++){
		cin >> fita[i];
	}
	
	for( int i = 1; i <= N; i++){
		if(fita[i] == -1){
			for(int j = i; j <= N; j++){
				if(fita[j] == 0){
					colorido1[i] = j - i;
					if(colorido1[i] > 9){
						colorido1[i] = 9;
					}
					break;
				}
			}

			for(int j = i; j >= 1; j --){
				if(fita[j] == 0){
					colorido2[i] = i - j;
					if(colorido2[i] > 9){
						colorido2[i] = 9;
					}
					break;
				}
			}
		}
	}

	for(int i = 1; i <= N; i++){
		if(colorido1[i] == 0 || colorido2[i] == 0){
			cout << colorido1[i] + colorido2[i] << " ";
		}
		else{
			if(colorido1[i] < colorido2[i] ){
				cout << colorido1[i] << " ";
			}
			else{
				cout << colorido2[i] << " ";
			}
		}
	}

 	cout << "\n";	

	return 0;
}
