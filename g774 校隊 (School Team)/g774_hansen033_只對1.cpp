#include <iostream>
using namespace std;

unsigned int smallest=4294967295;

void func(pair<int, int> score[], int Male, int Female, int total, int n){
	if(Male==0&&Female==0){
		if(smallest>total){
			smallest=total;
		}
		return;
	}
	if(Male)
		func(score, Male-1, Female, total+score[n].first, n+1);
	if(Female)
		func(score, Male, Female-1, total+score[n].second, n+1);
}

int main(){
	int N, M;
	cin >> N >> M;
	int totalclass=N+M;
	pair<int, int> score[totalclass];
	for(int t=0; t<totalclass; t++)
		cin >> score[t].first >> score[t].second;
	
	func(score, N, M, 0, 0);

	cout << smallest;
} 