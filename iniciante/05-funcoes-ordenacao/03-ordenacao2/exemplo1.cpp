#include<iostream>
#include<algorithm>

using namespace std;

struct Aluno{
	string nome;
	double nota;
};

bool comparaAlunos(Aluno a, Aluno b){
	return a.nota > b.nota;
}

int main(){
	Aluno aluno[3];

	for(int i = 0;i < 3; i++){
		cin >> aluno[i].nome >> aluno[i].nota;
	}

	sort(aluno, aluno + 3, comparaAlunos);
	
	for(int i = 0; i < 3; i++){
		cout << aluno[i].nome << " " << aluno[i].nota << "\n";
	}

	return 0;
}
