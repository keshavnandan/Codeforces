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
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, string> M;
    M['1'] = "";
    M['0'] = "";
    M['2'] = "2";
    M['3'] = "3";
    M['4'] = "322";
    M['5'] = "5";
    M['6'] = "53";
    M['7'] = "7";
    M['8'] = "7222";
    M['9'] = "7332";
    string res;
    for(char c : s) res += M[c];
    sort(res.rbegin(), res.rend());
    cout<<res<<endl;
}