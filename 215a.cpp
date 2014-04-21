
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
    int d, n, m;
    int a[105];
    cin>>n>>d;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
    cin>>m;
    if(m>n)
    cout<<sum-(m-n)*d<<endl;
    else{
        sort(a, a+n);
        sum = 0;
        for(int i = 0; i < m; i++) sum += a[i];
        cout<<sum<<endl;
    }
}

