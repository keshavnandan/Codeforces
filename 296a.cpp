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
    ll a, b;
    cin>>a>>b;
    ll ans = 0;
    while(a != b){
        if(a < b) swap(a, b);
        ll n = a/b;
        ans += n;
        a = a - n*b;
        if(a == 0) break;
    }
    cout<<ans<<endl;
}