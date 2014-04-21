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
    string g;
    cin>>g;
    int n = g.size();
    int curr  = g[0], dest = n-1;
    while(g[dest] == curr) dest--;

    int i = 1, count = 1;
    cout<<"dest = "<<dest<<endl;
    while(i < dest){
        while(i<dest && g[i] == curr) i++;
        if(i<dest-1)
        count++;
        curr = g[i];
        cout<<i<<" ";
    }
    cout<<"\n"<<count<<endl;
}
