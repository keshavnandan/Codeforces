#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

	int n, n1, n2, t;
	vector<int> v1, v2;
	cin>>n;
	int k = n;
	int s1 = 0, s2 = 0;
	int f = 0;
	while(k--){
		cin>>t;
		if(k == 0){
			if(t > 0) f = 1; 
		}
		if(t > 0){
			v1.push_back(t);
			s1 += t;
		}
		else {
			v2.push_back(-t);
			s2 += (-t);
		}
	}
	n1 = v1.size();
	n2 = v2.size();
	int done = 0;
	if(s1 != s2){
		done = 1;
		if(s1 > s2) cout<<"first"<<endl;
		else cout<<"second"<<endl;
	}

	else {
			for(int i = 0; i < min(n1, n2); i++){
		//		cout<<v1[i]<<" "<<v2[i]<<endl;
				if(v1[i] != v2[i]){
					done = 1;
					if(v1[i] > v2[i]) cout<<"first"<<endl;
					else cout<<"second"<<endl;
					break;
				}
			}
			if(!done){
				if(n1 > n2) cout<<"first"<<endl;
				else if(n1 < n2) cout<<"second"<<endl;
				else{
					if(f > 0) cout<<"first"<<endl;
					else cout<<"second"<<endl;
				}
			}
	}

}