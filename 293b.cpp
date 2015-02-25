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
#include <cctype>
using namespace std;
int M[1000];

int main(){
    string s, t;
    cin>>s>>t;
    int yay = 0, whoops = 0;
    for(char c : t) M[c]++;
    for(char &c : s){
        if(M[c] > 0){
            M[c]--;
            yay++;
            c = '#';
        }
    }
    for(char &c : s){
        if(c == '#') continue;
        if(islower(c)) c = toupper(c);
        else c = tolower(c);
        if(M[c] > 0){
            M[c]--;
            whoops++;
            c = '#';
        }        
    }
    cout<<yay<<" "<<whoops<<endl;
    // cout<<s<<endl;
}