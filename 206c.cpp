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
    int n, l, r, ql, qr;
    cin>>n>>l>>r>>ql>>qr;
    int W[100005];
    int t = n;
    for(int  i = 1; i <= n; i++) cin>>W[i];
    vector<int> Tl(2*n+5), Tr(2*n+5);
    for(int i = 1; i <= n; i++){
        Tl[2*i] = W[i]*l;
        Tr[2*i] = W[i]*r;
    }

    for(int k = 1; k <= n; k++){
        vector<int> Vl(2*n+5), Vr(2*n+5);
        for(int i = k, j = k+1; i <= n && j <= n; i++, j++){
            Vl[i+j] = min(Tl[i+j+1]+ql, Tr[i+j+1]) + W[i]*l;
            Vr[i+j] = min(Tr[i+j-1]+qr, Tr[i+j-1]) + W[j]*r;
        }
        Tl = Vl; Tr = Vr;
    }
    cout<<min(Tl[n+1], Tr[n+1])<<endl;
}
