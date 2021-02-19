#include<iostream>
#include<set>

using namespace std;

int main(){
	set<int> S;

	int N; //registros
	cin >> N;

	for(int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;	
		S.insert(tmp);
	}

	cout << S.size() << endl;

	return 0;
}
