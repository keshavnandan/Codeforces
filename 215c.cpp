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
string cal(string s){
    int n = s.size();
    if(n < 3) return "YES";
    int xc, yc, zc;
    map<char, int> m;
    m['x'] = 0;
    m['y'] = 0;
    m['z'] = 0;
    for(int i = 0; i < n; i++) m[s[i]]++;
    xc = m['x']; yc = m['y']; zc = m['z'];
    int n1 = n/3;
//    cout<<xc<<" "<<yc<<" "<<zc<<endl;
    if(xc < n1 || yc < n1 || zc < n1) return "NO";
    if(n%3 == 0 || n%3 == 1) return "YES";
    if(n%3 == 2 && max(xc, max(yc, zc)) == n1+1) return "YES";
    return "NO";
}

int main()
{
    string s;
    int l[100005], r[100005], m;
    cin>>s;
    cin>>m;
    for(int i = 0; i < m; i++) cin>>l[i]>>r[i];
    for(int i = 0; i < m; i++)
    cout<<cal(s.substr(l[i]-1, r[i]-l[i]+1))<<endl;
}


