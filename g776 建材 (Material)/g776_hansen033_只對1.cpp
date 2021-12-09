#include <iostream>
using namespace std;

int main() {
	int place, resource[400001];
	bool whatyoucanget[400001];
	cin >> place;
	for(int t=1; t<=place; t++)
		cin >> resource[t];
	
	int Q, start, end, total;
	cin >> Q;
	for(int t0=0; t0<Q; t0++){
		cin >> start >> end;
		for(int t1=1; t1<=place; t1++){
			whatyoucanget[t1]=false;
		}
		for(int t1=start; t1<=end; t1++){
			whatyoucanget[resource[t1]]=true;
		}
		total=0;
		for(int t1=0; t1<=place; t1++){
			if(whatyoucanget[t1])
				total++;
		}
		cout << total << "\n";
	}
} 