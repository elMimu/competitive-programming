#include<iostream>

using namespace std;

int main(){
	int B, N;

	while(true){
		cin >> B >> N;

		if(B == 0 && N == 0){
			break;
		}

		int R[21];

		for(int i = 1; i <= B; i++){
			cin >> R[i];
		}

		for( int i = 1; i <= N; i++){
			int D, C, V; // D -> devedor, C -> credor, V -> valor debênture;	
			cin >> D >> C >> V;
			R[D] = R[D] - V;
			R[C] = R[C] + V;
		}

		int k = 1;

		for(int i = 1; i <= B; i++){
			if(R[i] < 0) k = 0;
		}

		if(k == 1) cout << "S\n";
		else cout << "N\n";
	}

	return 0;
}
