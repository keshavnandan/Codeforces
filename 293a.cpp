#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <sstream>
using namespace std;

int main(){

    string s, t;
    cin>>s>>t;
    int n = s.size();
    int i = 0;
    while(i < n && s[i] == t[i]) i++;
    // if(i == n-1 && (t[i] - s[i]) == 1) {
    //     cout<<"No such string"<<endl;
    //     return 0;
    // }
    int j = n-1;
    while( j > i && s[j] == 'z') j--;
    if(j > i){
        s[j] = s[j]+1;
        cout<<s<<endl;
        return 0;
    }
    s[i] = s[i] + 1;
    for(int j = i+1; j < n; j++) s[j] = 'a';
    if(s == t) cout<<"No such string"<<endl;
    else cout<<s<<endl;
}