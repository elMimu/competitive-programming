#include <iostream>
#include <set>

using namespace std;

struct r{
	int i;
	int j;
};

int main(){
	int N;
	cin >> N;

	set<r> s;

	for(int x = 0; x < N; x++){
		r temp;
		cin >> temp.i >> temp.j;
		s.insert(temp);
	}

	for(set<r>::iterator it; it != s.end(); it++){
		cout << it -> i << it -> j << endl;
	}
	
		return 0;
}
