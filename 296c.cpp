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
#include <numeric>
using namespace std;
typedef pair<int,int> pi;
typedef set<int> si;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef long long ll;
#define sz size()
#define mp(x, y) make_pair(x, y)
#define ri(a, b) for(int i=((int)(a)); i < ((int)(b)); i++)                // i -> [a, b)
#define rie(a, b) for(int i=((int)(a)); i <= ((int)(b)); i++)            // i -> [a, b]
#define rj(a, b) for(int j=((int)(a)); j < ((int)(b)); j++)               // j -> [a, b)
#define rje(a, b) for(int j=((int)(a)); j <= ((int)(b)); j++)           // j -> [a, b]
#define rk(a, b) for(int k=((int)(a)); k < ((int)(b)); k++)           // k -> [a, b)
#define rke(a, b) for(int k=((int)(a)); k <= ((int)(b)); k++)       // k -> [a, b]
#define fi(b) for(int i=0; i < ((int)(b)); i++)                             // i -> [0, b)
#define fie(b) for(int i=0; i <= ((int)(b)); i++)                         // i -> [0, b]
#define fj(b) for(int j=0; j < ((int)(b)); j++)                            // j -> [0, b)
#define fje(b) for(int j=0; j <= ((int)(b)); j++)                        // j -> [0, b]
#define fk(b) for(int k=0; k < ((int)(b)); k++)                        // k -> [0, b)
#define fke(b) for(int k=0; k < ((int)(b)); k++)                      // k -> [0, b]
#define fle(b) for(int l=0; l <= ((int)(b)); l++)                        // l -> [0, b]
int M[200005];

int main(){
    int w, h, n, t;
    char c;
    multiset<int> x, y, xd, yd;
    cin>>w>>h>>n;
    x.insert(w); y.insert(h);
    xd.insert(0); xd.insert(w);
    yd.insert(0); yd.insert(h);
    while(n--){
        cin>>c>>t;
        //case of x
        if(c == 'V'){
            xd.insert(t);
            auto it = xd.find(t);
            int a1 = *(--it);
            it++; it++;
            int a2 = *(it);
            x.erase(x.find(a2-a1));
            x.insert(t-a1);
            x.insert(a2-t);
            ll p = *x.rbegin(), q = *y.rbegin();
            cout<<p*q<<endl;
        }
        else{
            yd.insert(t);
            auto it = yd.find(t);
            int a1 = *(--it);
            it++; it++;
            int a2 = *(it);
            y.erase(y.find(a2-a1));
            y.insert(t-a1);
            y.insert(a2-t);
            ll p = *x.rbegin(), q = *y.rbegin();
            cout<<p*q<<endl;
        }
    }
}