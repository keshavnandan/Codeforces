//
//  c.cpp
//  277
//
//  Created by Keshav Nandan on 17/11/14.
//  Copyright (c) 2014 Keshav Nandan. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
map<int, string> M;

string pow(int k = 0, int m = 0){
    string s;
    for(int i = 0; i < m; i++) s += to_string(k);
    return s;
}

string maxf(int m, int s){
//    cout<<"m = "<<m<<" s = "<<s<<endl;
    if(m == 1) return s < 10 ? M[s] : "-1";
    if(s == 0 || s > 9*m) return "-1";
    if(s > 9)
        return M[9] + maxf(m-1, s-9);
    return M[s]+pow(0, m-1);
}

string minf(int m, int s, int k = 0){
    if(m == 1) return s < 10 ? M[s] : "-1";
    if(s > 9*m) return "-1";
    if(s == 0 && k == 1) return "-1";

    int x = 0;
    if(k == 1) x++;
    while (x < 10 && s > x+9*(m-1)) x++;
    return M[x] + minf(m-1, s-x);
}

int main(){

    for(int i = 0; i <= 9; i++) M[i] = to_string(i);
    int m, s;
    cin>>m>>s;
    cout<<minf(m, s, 1)<<" "<<maxf(m, s)<<endl;
}