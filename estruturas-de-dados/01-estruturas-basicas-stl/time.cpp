#include<iostream>
#include<vector>
#include<algorithm>

#define MAXT 1010

using namespace std;

typedef struct Time Time;

struct Time{
	vector < pair<int, string> > jogador;
};

void imprime_vector(vector< pair<int,string> > v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << " " << v[i].first << endl;
	}
	cout << endl;	
}

bool ordena_alfabetico(pair<int, string> a, pair<int, string> b){
	return a.second < b.second;
}

Time equipe[MAXT];

void ordena_time_alfabetico(int i){
	sort(equipe[i].jogador.begin(), equipe[i].jogador.end(), ordena_alfabetico);
}

void imprime_time(int indice_time){
	cout << "Time " << indice_time << endl;	

	for(int i = 0; i < equipe[indice_time].jogador.size(); i++){
		cout << equipe[indice_time].jogador[i].second << endl;
	}
	cout << endl;
}

int main(){
	//entrada;
	int N; // num alunos
	int T;// num times
	vector< pair<int, string> > alunos;

	string nome;
	int habilidade;

	cin >> N >> T;

	for(int i = 0; i < N; i++){
		cin >> nome >> habilidade;	
		alunos.push_back(make_pair(habilidade,nome));
	}

	sort(alunos.begin(), alunos.end());

	//imprime_vector(alunos);

	int i = 1;

	while(!alunos.empty()){
		pair<int, string> tmp;
		tmp = alunos[alunos.size() - 1];
		equipe[i].jogador.push_back(tmp);
		alunos.pop_back();
		
		if(i == T) i = 1;
		else i++;
	}

	for(int i = 1; i <= T; i++){
		ordena_time_alfabetico(i);
		imprime_time(i);
	}

	return 0;
}
