#include<iostream>

using namespace std;

int A[110][110], B[110][110];

int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> A[i][j];
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> B[i][j];
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cout << A[i][j] + B[i][j] << " ";
		}
	cout << "\n";
	}
	return 0;
}
