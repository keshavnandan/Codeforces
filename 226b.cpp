#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <cstdio>
using namespace std;

int main(){

    char st[5005];
    scanf("%s", st);
    string s(st);
    if(s.size() < 4){
        cout<<"0"<<endl;
        exit(0);
    }
    if(s.size() == 4){
        if(s == "bear") cout<<"1"<<endl;
        else cout<<"0"<<endl;
        exit(0);
    }
    s = "x" + s;
    long long iprev = 1, jprev = 1;
    long long icurr = 0, jcurr = jprev;
    int n = s.size()-1;
    int k = 0;
    long long ans = 0;
    for(int i = 1; i <= n-3; i++){
        if(s.substr(i, 4) == "bear"){
            iprev = icurr;
            icurr = i;
            jcurr = i+3;
            ans += (icurr - iprev)*(n - jcurr + 1);
        }
    }
    cout<<ans<<endl;
}

