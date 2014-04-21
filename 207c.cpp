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
    int sol[300005];
    fill(sol, sol+n+1, -1);
    int i, j, p;
    set<int> S;
    for(i = 1; i <= n; i++) S.insert(i);
    set<int>::iterator ti, tj, it;
    for(int k = 1; k <= m; k++){
        cin>>i>>j>>p;
        ti = S.lower_bound(i); tj = S.upper_bound(j);
        for(it = ti; it != tj; it++){
            if(*it != p && sol[*it] == -1)
                sol[*it] = p;
        }
        S.erase(ti, tj);
        S.insert(p);

//        for(; i <= j; i++)
//            if(i != p && sol[i] == -1) sol[i] = p;
    }
    sol[p] = 0;
    for(i = 1; i < n; i++) cout<<sol[i]<<" ";
    cout<<sol[n]<<endl;
}


