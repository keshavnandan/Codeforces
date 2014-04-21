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
long long gcd(long long a, long long b)
{
    for (;;)
    {
        if (a == 0LL) return b;
        b %= a;
        if (b == 0LL) return a;
        a %= b;
    }
}

long long lcm(long long a, long long b)
{
    long long temp = gcd(a, b);

    return temp ? (a / temp * b) : 0LL;
}

int main()
{
    long long n, m;
    string s, t, S, T;
    cin>>n>>m;
    cin>>s>>t;
    long long N = lcm(s.size(), t.size());
    long long sum = 0LL;
//    cout<<S<<","<<T<<endl;
    for(long long i = 0; i < N/s.size(); i++) S += s;
    for(long long i = 0; i < N/t.size(); i++) T += t;
    for(long long i = 0; i < N; i++)
        if(S[i] != T[i]) sum += 1LL;
//    cout<<N<<"sfva"<<sum<<endl;
    long long sn = s.size();
    long long g = gcd(n, N);
    n /= g; N /= g;
    g = gcd(sn, N);
    sn /= g; N /= g;
    cout<<sum*(n*sn)/N<<endl;
}


