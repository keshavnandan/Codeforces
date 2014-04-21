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

int main()
{
    int n, m;
    cin>>n>>m;
    int a[100005], l[100005], c[100005];
    for(int i = 1; i <= n; i++) cin>>a[i];
    for(int j = 1; j <= m; j++) cin>>l[j];
    set<int> s;
    for(int i = n; i > 0; i--){
        s.insert(a[i]);
        c[i] = s.size();
    }
    for(int i = 1; i <= m; i++) cout<<c[l[i]]<<endl;
}


