#include <iostream>
using namespace std;

int main() {
	int contestant;
	cin >> contestant;
	bool leader[contestant];

	for(int t=0; t<contestant; t++){
		leader[t]=true;
	}
	bool aretheyfriend;
	for(int t0=0; t0<contestant; t0++){
		for(int t1=0; t1<contestant; t1++){
			cin >> aretheyfriend;
			if(aretheyfriend&&t0!=t1&&leader[t0]&&leader[t1]){
				//printf("%d %d\n", t0, t1);
				leader[t1]=false;
			}
		}
	}
	int leaderamount=0;
	for(int t=0; t<contestant; t++){
		if(leader[t]){
			leaderamount++;
		}
	}
	cout << leaderamount;

	
} 