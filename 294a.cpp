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
int a[1000], b[1000];
map<char, int> val;

int main(){

    val['Q'] = val['q'] = 9;
    val['R'] = val['r'] = 5;
    val['B'] = val['b'] = 3;
    val['N'] = val['n'] = 3;
    val['P'] = val['p'] = 1;
    val['K'] = val['k'] = 0;

    vector<string> chess(8, string(8, '.'));
    for(int i = 0; i < 8; i++) cin>>chess[i];
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++){
            char c = chess[i][j];
            if(isalpha(c) && isupper(c)) a[c]++;
            if(isalpha(c) && islower(c)) b[c]++;            
        }
    int sa = 0, sb = 0;
    for(int i = 0; i < 1000; i++){
        sa += a[i]*val[i];
        sb += b[i]*val[i];
    }
    if(sa > sb) cout<<"White"<<endl;
    if(sa < sb) cout<<"Black"<<endl;
    if(sa == sb) cout<<"Draw"<<endl;
}