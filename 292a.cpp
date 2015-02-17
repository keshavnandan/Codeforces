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

int main(){
    int a, b, s;
    cin>>a>>b>>s;
    int d = s - (abs(a) + abs(b));
    if(d < 0) cout<<"No"<<endl;
    else if(d == 0) cout<<"Yes"<<endl;
    else if(d%2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}