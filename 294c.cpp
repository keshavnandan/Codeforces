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
    ll n, m;
    cin>>n>>m;
    if(2*n <= m) cout<<n<<endl;
    else if(2*m <= n) cout<<m<<endl;
    else{
        ll maxv = 0;
        for(ll a = 0; a <= min(n, m); a++){
            ll b = min(m-2*a, (n-a)/2);
            if(b < 0) continue;
            if(a+b > maxv) maxv = a+b;
        }
        cout<<maxv<<endl;
    }
}