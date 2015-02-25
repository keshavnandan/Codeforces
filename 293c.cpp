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
typedef long long ll;

int main(){

    int n, m, k, t;
    ll val[100005], b[100005];
    map<ll, ll> pos;
    cin>>n>>m>>k;
    for(int i = 1; i <= n; i++){
      cin>>t;
      val[i] = t;
      pos[t] = i;
    }
    ll strokes = 0;
    for(int i = 0; i < m; i++){
        cin>>t;
        int pt = pos[t];
        ll stroke = (pt+k-1)/k;
        strokes += stroke;
        if(pt == 1) continue;
        int ps = pt-1, s = val[ps];
        pos[s] = pt;
        pos[t] = ps;
        swap(val[ps], val[pt]);
    }
    cout<<strokes<<endl;
    // for(int i = 1; i <= n; i++) cout<<val[i]<<" ";
    // cout<<endl;
}