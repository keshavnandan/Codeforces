#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	map<int, int> a, b;
	int i, j;
	while(n--){
		cin>>i>>j;
		a[j] = i;
		b[i] = j;
	}
	vector<int> first, second;
	int k = b[0];
	while(true){
		second.push_back(k);
		if(b.count(k) == 0 || b[k] == 0) break;
		k = b[k];
	}
	
	k = 0;
	for(map<int, int>::iterator it = b.begin(); it != b.end(); it++)
		if(a.count(it->first) == 0) k = it->first;

	while(true){
		first.push_back(k);
		if(b.count(k) == 0 || b[k] == 0) break;
		k = b[k];
	}

	// for(int k : first) cout<<k<<" ";
	// cout<<endl;
	// for(int k : second) cout<<k<<" ";
	// cout<<endl;
	vector<int>::iterator f = first.begin(), s = second.begin();
	int x = 0;
	while(f != first.end() && s != second.end()){
		if(x)
			cout<<" "<<*f<<" "<<*s;
		else{
			x++;
			cout<<*f<<" "<<*s;
		}
		f++;
		s++;
	}	
	if(f != first.end()) cout<<" "<<*f;
	cout<<endl;
	return 0;

}