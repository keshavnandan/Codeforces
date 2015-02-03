#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin>>n;
	vector<vector<int> >  v(4, vector<int>());
	int ca = 0, cb = 0, cc = 0;
	int k = 0, i = 0;
	while(i++ < n){
		cin>>k;
		v[k].push_back(i);
	}

	int s = min(v[3].size(), min(v[1].size(), v[2].size()));
	cout<<s<<endl;
	for(int i = 0; i < s; i++){
		cout<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<endl;
	}
}