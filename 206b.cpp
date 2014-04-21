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
    int c1, c2, c3, c4;
    int b[1001], t[1001];
    int n, m;
    cin>>c1>>c2>>c3>>c4>>n>>m;
    for(int i = 0; i < n; i++) cin>>b[i];
    for(int i = 0; i < m; i++) cin>>t[i];
    int rb=0,rt=0;
    for(int i = 0; i < n; i++) rb += min(b[i]*c1, c2);
    for(int i = 0; i < m; i++) rt += min(t[i]*c1, c2);
    rb = min(c3, rb);
    rt = min(c3, rt);
    cout<<min(c4, rb+rt)<<endl;
}


