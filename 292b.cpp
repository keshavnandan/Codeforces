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
int g[105] = {0}, b[105] = {0};

int main(){
    int n, m, boys, girls, t;
    cin>>n>>m;
    cin>>boys;
    for(int i = 0; i < boys; i++){
        cin>>t;
        b[t] = 1;
    }
    cin>>girls;
    for(int i = 0; i < girls; i++){
        cin>>t;
        g[t] = 1;
    }
    for(int i = 0; i <= n*m+100; i++){
        int boy = i%n, girl = i%m;
        if(b[boy]) g[girl] = 1;
        if(g[girl]) b[boy] = 1;
    }
    t = 0;
    for(int i = 0; i < n; i++) t += b[i];
    for(int i = 0; i < m; i++) t += g[i];
    if(t == m+n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}