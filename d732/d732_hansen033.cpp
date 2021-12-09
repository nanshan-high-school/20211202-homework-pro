#include <iostream>
using namespace std;

int bsearch(int a[], int left, int right, int x){
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}

int main(){
	int n, a;
	cin >> n >> a;
	int p[n], ask[a];
	//輸入陣列
	for(int t=0; t<n; t++)
		cin >> p[t];
	for(int t=0; t<a; t++)
		cin >> ask[t];
	//想找的數字
	for(int ti=0; ti<a; ti++){
		printf("%d\n", bsearch(p, 0, n-1, ask[ti])+1);
	}
	return 0;
}
