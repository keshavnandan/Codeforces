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
    int d, k;
    cin>>k>>d;
    if(d == 0 && k>1){
        cout<<"No solution"<<endl;
        return 0;
    }
    if(d==0){
        cout<<"0"<<endl;
        return 0;
    }
    cout<<d;
    while(--k) cout<<"0";
    cout<<endl;
}


