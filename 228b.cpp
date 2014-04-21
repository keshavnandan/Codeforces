#include <iostream>
#include <cstdlib>
#include <set>
using namespace std;
string A[105];
typedef pair<int, int> pi;
//bool operator
int main(){

    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
       cin>>A[i];
//    for(int i = 0; i < n; i++) cout<<A[i]<<endl;

    set<pair<int, int> > S;
    for(int i = 0; i < n-2; i++)
    for(int j = 1; j < n-1; j++){
        if(A[i][j] == '#' && A[i+1][j-1] == '#' && A[i+1][j+1] == '#' && A[i+1][j] == '#' && A[i+2][j] == '#'){
//                cout<<i<<" : "<<j<<endl;
            pi a = make_pair(i, j), b = make_pair(i+1, j-1), c = make_pair(i+1, j), d = make_pair(i+1, j+1), e = make_pair(i+2, j);
            if(S.count(a) == 1 || S.count(b) == 1 || S.count(c) == 1 || S.count(d) == 1 || S.count(e) == 1){
                cout<<"NO"<<endl;
                exit(0);
            }
            else{
                S.insert(a);
                S.insert(b);
                S.insert(c);
                S.insert(d);
                S.insert(e);
            }
        }
    }
//    for(set<pi>::iterator it = S.begin(); it != S.end(); it++) cout<<it->first<<" "<<it->second<<endl;
    cout<<"YES"<<endl;
}
