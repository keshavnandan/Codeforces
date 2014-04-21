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
    int m;
    cin>>m;
    int c[105];
    int i;
    for(i = 1; i <= m; i++) cin>>c[i];
    int x, y;
    cin>>x>>y;
    int s1, s2, t1, t2;
    s1=s2=1; t1=t2=m;
    int s=c[1];
    for(i = 1; i <=m && s<x; i++) s += c[i];
    s1=i;
    for(; i <= m && s<=y; i++) s+= c[i];
    t1=i-1;
    s=c[m];
    for(i=m; i>=0 && s<x; i--) s += c[i];
    s2=i;
    for(; i>=0 && s<=y; i--) s += c[i];
    t2=i+1;
    cout<<s1<<s2<<t1<<t2<<endl;
    if(t2>t1+1 || s2<=s1) cout<<"0"<<endl;
    else {
        if(s1<t2) cout<<t1<<endl;
        else cout<<t2<<endl;
    }
}

