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

    ll n, t;
    ll s = 0ll;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        s += t;
    }
    ll s1 = 0ll;
    for(int i = 0; i < n-1; i++){
        cin>>t;
        s1 += t;
    }
    cout<<s-s1<<endl;
    ll s2 = 0ll;
    for(int i = 0; i < n-2; i++){
        cin>>t;
        s2 += t;
    }
    cout<<s1-s2<<endl;

}